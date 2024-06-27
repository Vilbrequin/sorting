#include <stdio.h>

void merge_sort(int* arr, int size);
void merge(int* arr_a, int size_a, int* arr_b, int size_b, int* merged_output);
void printf_arr(int* arr, int size);

int main(int argc, char** argv){

    int arr[] = {9, 3, 7, 5, 6, 4, 8, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, size);
    printf_arr(arr, size);
    return 0;
}

void merge(int* arr_a, int size_a, int* arr_b, int size_b, int* merged_output){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < size_a && j < size_b){
        if (arr_a[i] < arr_b[j]){
            merged_output[k++] = arr_a[i++];
        }
        else {
            merged_output[k++] = arr_b[j++];
        }
    }

    while(j < size_b){
        merged_output[k++] = arr_b[j++];
    }

    while(i < size_a){
        merged_output[k++] = arr_a[i++];
    }
}

void merge_sort(int* arr, int size){
    
    if(size <= 1) {
        return;
    }

    int i = 0; // left array
    int j = 0; // right array

    int middle = (int)(size/2);
    int left_arr[middle];
    int right_arr[size - middle];

    for (i = 0; i < size; i ++){
        if(i < middle){
            left_arr[i] = arr[i];
        }
        else {
            right_arr[j] = arr[i];
            j++;
        }
    }
    merge_sort(left_arr, middle);
    merge_sort(right_arr, size - middle);
    merge(left_arr, middle, right_arr, size - middle, arr);
}
void printf_arr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
