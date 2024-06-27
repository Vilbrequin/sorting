
#include <stdio.h>

int partition(int* arr, int start_index, int end_index);
void quick_sort(int* arr, int start_index, int end_index);
void printf_arr(int* arr, int size);

int main(int argc, char** argv){
    int arr[] = {8, 2, 4, 7, 1, 3, 9, 6, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size - 1);
    printf_arr(arr, size);
    return 0;
}

void quick_sort(int* arr, int start_index, int end_index){

    if(end_index <= start_index){
        return;
    }
    int pivot  = partition(arr, start_index, end_index);
    quick_sort(arr, start_index, pivot - 1);
    quick_sort(arr, pivot + 1, end_index);
}

int partition(int* arr, int start_index, int end_index){
        
    int i = start_index - 1;
    int j = start_index;
    int pivot = arr[end_index];
    int tmp = 0;
    
    while(j <= end_index){
        if(arr[j] < pivot){
            i++;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
        j++;
    }
    i++;
    tmp = arr[i];
    arr[i] = arr[end_index];
    arr[end_index] = tmp;
    
    return i;
}
void printf_arr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}