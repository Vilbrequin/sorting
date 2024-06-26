#include <stdio.h>

void* selection_sort(int* arr, int size);
void printf_arr(int* arr, int size);

int main(int argc, char** argv){
    
    int arr[] = {64, 12, 10, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, size);
    printf_arr(arr, size);
    return 0;
}

void* selection_sort(int* arr, int size){
    int min = arr[0];
    int min_index = 0;
    int tmp = 0;
    int index = 0;
    int i = 0;
    while(index < size){
        for(i = index; i < size; i++){
            if(arr[i] <= min){
                min = arr[i];
                min_index = i;
            }
        }
        tmp = arr[index];
        arr[index] = min;
        arr[min_index] = tmp;

        index++;
        min = arr[index];
    }
}

void printf_arr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
