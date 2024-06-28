# Sorting Algorithms

This repository contains implementations of various sorting algorithms using C language

## Table of Contents
- [Selection Sort](#selection-sort)
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

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request for any sorting algorithms you wish to add.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.