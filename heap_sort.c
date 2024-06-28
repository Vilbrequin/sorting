#include <stdio.h>

void heapify(int* arr, int size, int index);
void printf_arr(int* arr, int size);
void build_max_heap(int* arr, int size);
void heap_sort(int* arr, int size);

int main(int argc, char** argv){
    int arr[] = {10, 20, 15, 12, 40, 25, 18};
    int size = sizeof(arr)/sizeof(arr[0]);
    heap_sort(arr, size);
    printf_arr(arr, size);
    return 0;
}

void heapify(int* arr, int size, int index){
    int largest = index;
    int left_side_index = (2*index) + 1;
    int right_side_index = (2*index) + 2;
    
    if (left_side_index < size && arr[left_side_index] > arr[largest]){
        largest = left_side_index;
    }

    if (right_side_index < size && arr[right_side_index] > arr[largest]){
        largest = right_side_index;
    }

    if (largest != index){
        int tmp = arr[index];
        arr[index] = arr[largest];
        arr[largest] = tmp;
        heapify(arr, size, largest);
    }
}

void build_max_heap(int* arr, int size){
    for (int i = (size/2) - 1; i >= 0; i--){
        heapify(arr, size, i);
    }
}


void heap_sort(int* arr, int size){
    
    if(size <= 0){
        return;
    }

    build_max_heap(arr, size);
    
    int last = size -1;
    int tmp = arr[last];
    arr[last] = arr[0];
    arr[0] = tmp;
    
    heap_sort(arr, last);
}

void printf_arr(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
