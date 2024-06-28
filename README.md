# Sorting Algorithms

This repository contains implementations of various sorting algorithms using C language

## Table of Contents
- [Selection Sort](#selection-sort)
- [Bubble Sort](#bubble-sort)
- [Insertion Sort](#insertion-sort)
- [Merge Sort](#merge-sort)
- [Quick Sort](#quick-sort)
- [Heap Sort](#heap-sort)
- [Comparative Table of Sorting Algorithms](#comparative-table-of-sorting-algorithms)
- [Contributing](#contributing)
- [License](#license)

## Selection Sort

### Definition
Selection Sort is an in-place comparison sorting algorithm. It has an O(n²) time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

### Pseudo Algorithm
1. Iterate over the list.
2. Assume the first element is the minimum.
3. Compare this element to the next elements to find the smallest element.
4. If a smaller element is found, swap it with the assumed minimum element.
5. Move to the next position and repeat until the entire list is sorted.

### Time Complexity
- **Best Case:** O(n²)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)

### Space Complexity
- **Overall:** O(1) (constant space)

### Video Explanation
For a detailed video explanation of the Selection Sort algorithm, you can watch this [YouTube video](https://youtu.be/EwjnF7rFLns).

## Bubble Sort

### Definition
Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. It gets its name because smaller elements "bubble" to the top of the list.

### Pseudo Algorithm
1. Start at the beginning of the list.
2. Compare the first two elements.
3. If the first element is greater than the second, swap them.
4. Move to the next pair of elements and repeat the process until the end of the list.
5. Repeat the entire process for the remaining elements until the list is sorted.

### Time Complexity
- **Best Case:** O(n)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)

### Space Complexity
- **Overall:** O(1) (constant space)

### Video Explanation
For a detailed video explanation of the Bubble Sort algorithm, you can watch this [YouTube video](https://youtu.be/Dv4qLJcxus8).

## Insertion Sort

### Definition
Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it provides several advantages: simple implementation, efficient for (quite) small data sets, adaptive, stable, in-place, and online.

### Pseudo Algorithm
1. Iterate from the second element to the end of the array.
2. For each iteration, select the element and find its correct position in the sorted part of the array.
3. Shift all the elements in the sorted part that are greater than the selected element to the right.
4. Insert the selected element at its correct position.
5. Repeat until the entire array is sorted.

### Time Complexity
- **Best Case:** O(n)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)

### Space Complexity
- **Overall:** O(1) (constant space)

### Video Explanation
For a detailed video explanation of the Insertion Sort algorithm, you can watch this [YouTube video](https://youtu.be/8mJ-OhcfpYg).

## Merge Sort

### Definition
Merge Sort is a divide-and-conquer algorithm that was invented by John von Neumann in 1945. It divides the input array into two halves, recursively sorts both halves, and then merges the sorted halves to produce the sorted array.

### Pseudo Algorithm
1. If the array has one or zero elements, it is already sorted. Otherwise:
2. Divide the unsorted list into two approximately equal parts.
3. Recursively sort each part.
4. Merge the two sorted parts into a single sorted list.


### Time Complexity
- **Best Case:** O(n log n)
- **Average Case:** O(n log n)
- **Worst Case:** O(n log n)

### Space Complexity
- **Overall:** O(n) (due to the use of auxiliary arrays)

### Video Explanation
For a detailed video explanation of the Merge Sort algorithm, you can watch this [YouTube video](https://youtu.be/3j0SWDX4AtU).

## Quick Sort

### Definition
Quick Sort is an efficient, in-place, divide-and-conquer sorting algorithm. It was developed by Tony Hoare in 1959. Quick Sort works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

### Pseudo Algorithm
1. Pick a pivot element from the array.
2. Partition the array into two sub-arrays:
   - Elements less than the pivot
   - Elements greater than the pivot
3. Recursively apply the above steps to the sub-arrays.
4. Combine the sub-arrays to get the final sorted array.


### Time Complexity
- **Best Case:** O(n log n)
- **Average Case:** O(n log n)
- **Worst Case:** O(n²)

### Space Complexity
- **Overall:** O(log n) (due to recursive stack space)

### Video Explanation
For a detailed video explanation of the Quick Sort algorithm, you can watch this [YouTube video](https://youtu.be/Vtckgz38QHs).

## Heap Sort

### Definition
Heap Sort is a comparison-based sorting technique based on a binary heap data structure. It is similar to selection sort where we first find the maximum element and place it at the end. We repeat the same process for the remaining elements.

### Pseudo Algorithm
1. Build a max heap from the input data.
2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of the heap by one. Finally, heapify the root.
3. Repeat step 2 while the size of the heap is greater than 1.


### Time Complexity
- **Best Case:** O(n log n)
- **Average Case:** O(n log n)
- **Worst Case:** O(n log n)

### Space Complexity
- **Overall:** O(1) (in-place)

### Video Explanation
For a detailed video explanation of the Heap Sort algorithm, you can watch this [YouTube video](https://www.youtube.com/watch?v=HqPJF2L5h9U).

## Comparative Table of Sorting Algorithms

| Algorithm      | Best Case Time Complexity | Average Case Time Complexity | Worst Case Time Complexity | Space Complexity  |
|----------------|----------------------------|------------------------------|----------------------------|--------------------|
| Selection Sort | O(n²)                      | O(n²)                        | O(n²)                      | O(1)               |
| Bubble Sort    | O(n)                       | O(n²)                        | O(n²)                      | O(1)               |
| Insertion Sort | O(n)                       | O(n²)                        | O(n²)                      | O(1)               |
| Merge Sort     | O(n log n)                 | O(n log n)                   | O(n log n)                 | O(n)               |
| Quick Sort     | O(n log n)                 | O(n log n)                   | O(n²)                      | O(log n)           |
| Heap Sort      | O(n log n)                 | O(n log n)                   | O(n log n)                 | O(1)               |


## Contributing
Contributions are welcome! Please fork this repository and submit a pull request for any sorting algorithms you wish to add.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.