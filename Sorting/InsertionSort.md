# Insertion Sort
- Insertion sort is a simple sorting algorithm that works by repeatedly inserting an element from the unsorted portion of the array into its correct position in the sorted portion of the array. 
- The average case scenario of insertion sort occurs when the input array is randomly ordered. In this case, on average, each element must be compared with half of the elements in the sorted portion of the array before it is correctly positioned. Therefore, the average-case time complexity of insertion sort is O(n^2), where n is the size of the array.
- The best case scenario of insertion sort occurs when the input array is already sorted. In this case, the algorithm still performs n-1 comparisons, but only one swap is required for each element. The best-case time complexity of insertion sort is O(n).
- The worst case scenario of insertion sort occurs when the input array is sorted in reverse order. In this case, each element in the unsorted portion of the array must be compared with every element in the sorted portion of the array before it is correctly positioned. Therefore, the worst-case time complexity of insertion sort is O(n^2).
- It's important to note that although insertion sort has a higher time complexity than other sorting algorithms like quicksort and mergesort, it can perform better than them for small input sizes, and it has the advantage of being an in-place sorting algorithm that requires only constant additional memory.

Recursive
```c
void insertionSort (int arr[], int n) {
    if(n<=1) return;
    insertionSort(arr,n-1);
    int last = arr[n-1];
    int j = n - 2;
    while( j>=0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j] = last;
}
```
Iterative
```c
void insertionSort (int arr[], int n) {
    for(int i = 1;i < n; i++) {
        int j = i - 1;
        int last = arr[i];
        while(j >= 0 && arr[j] > last) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = last;
    }
}
```
