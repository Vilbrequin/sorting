#include <stdio.h>

void* insertion_sort(int* arr, int size);
void printf_arr(int* arr, int size);

int main(int argc, char** argv){
    int arr[] = {14, 15, 12, 20, 17};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, size);
    printf_arr(arr, size);
    return 0;
}

void* insertion_sort(int* arr, int size){
    int i = 1;
    int index = 0;
    while(i < size){
        int j = i - 1;
        int tmp = 0;
        while(j >= 0){  
            if(arr[j + 1] < arr[j]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            j--;            
        }
        i++;
    }
}

void printf_arr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}