# Selection Sort
- Selection sort is a simple sorting algorithm that works by repeatedly selecting the smallest remaining element in the unsorted portion of the array and swapping it with the next element in the sorted portion of the array. 
- The average case scenario of selection sort occurs when the input array is randomly ordered. In this case, on average, each element must be compared with half of the remaining elements in the unsorted portion of the array. Therefore, the average-case time complexity of selection sort is O(n^2), where n is the size of the array.
- The best case scenario of selection sort occurs when the input array is already sorted. In this case, the algorithm still performs n-1 comparisons, but no swaps are required. The best-case time complexity of selection sort is O(n^2).
- The worst case scenario of selection sort occurs when the input array is sorted in reverse order. In this case, each element in the unsorted portion of the array must be compared with every remaining element in the unsorted portion of the array. Therefore, the worst-case time complexity of selection sort is O(n^2).
- It's important to note that selection sort has a higher time complexity than other sorting algorithms like quicksort and mergesort, and it is not suitable for large input sizes. However, it has the advantage of being an in-place sorting algorithm that requires only constant additional memory, and it has a simple implementation that is easy to understand and implement.
#### Iterative
```c
void selectionSort(int arr[], int n) {
    for(int i = 0; i< n-1; i++) {
        int minIndex = i;
        int j = i + 1;
        while(j < n) {
            if(arr[j] < arr[i]) {
                minIndex = j;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
```

#### Recursive
Adding Later
