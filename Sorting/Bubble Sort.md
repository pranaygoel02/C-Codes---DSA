# Bubble Sort
- Bubble sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements in the array if they are in the wrong order.
- The average case scenario of bubble sort occurs when the input array is randomly ordered. In this case, on average, each element must be com-pared with half of the remaining elements in the array, and the algorithm performs n^2/4 comparisons and swaps, where n is the size of the array. Therefore, the average-case time complexity of bubble sort is O(n^2).
- The best case scenario of bubble sort occurs when the input array is already sorted. In this case, the algorithm only needs to perform n-1 comparisons and no swaps. The best-case time complexity of bubble sort is O(n).
- The worst case scenario of bubble sort occurs when the input array is sorted in reverse order. In this case, the algorithm must perform n*(n-1)/2 comparisons and swaps. Therefore, the worst-case time complexity of bubble sort is O(n^2).
- Bubble sort has a high time complexity, and it is generally not used in practice for sorting large arrays. However, it is a simple algorithm to understand and can be useful for educational purposes.
#### Iterative
```c
void bubbleSort(int arr[], int n) {
    for(int i= 0;i<n-1;i++) {
        for(int j=i;j<n-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr+j,arr+(j+1));
            }
        }
    }
}
```
