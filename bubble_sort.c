#include <stdio.h>

void* bubble_sort(int* arr, int size);
void printf_arr(int* arr, int size);

int main(int argc, char** argv){
    int arr[] = {64, 10, 4, 15, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, size);
    printf_arr(arr, size);
    return 0;
}

void* bubble_sort(int* arr, int size){
    int index = 0;
    int i = 0;
    while(index < size){
        for(i = 0; i < size - 1; i++){
            int tmp = 0;
            if(arr[i+1] < arr[i]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
        index++;
        size--;
    }
}

void printf_arr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
