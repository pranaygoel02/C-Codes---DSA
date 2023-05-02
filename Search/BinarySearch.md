# Binary Search
- Binary search is a search algorithm that works on sorted arrays by repeatedly dividing the search interval in half until the target element is found.
- The average case scenario of binary search occurs when the target element is found in the middle of the array, so the search terminates after a logarithmic number of iterations. Therefore, the average-case time complexity of binary search is O(log n), where n is the size of the array.The best case scenario of binary search occurs when the target element is the middle element of the array, in which case the search terminates in constant time, i.e., one comparison. The best-case time complexity of binary search is O(1).
- The worst case scenario of binary search occurs when the target element is not in the array or when it is located at one of the ends of the array. In this case, the search has to iterate through all elements in the array before concluding that the target element is not present. The worst-case time complexity of binary search is O(log n).
- It's important to note that the worst-case scenario can also occur if the array is not sorted initially or if it is sorted in descending order, as binary search assumes that the array is sorted in ascending order. In such cases, the search will not be able to utilize the benefits of the sorted array and will have to iterate through all elements.
```c
#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int len, int k);

int main() {
    int *arr = (int*)calloc(5,sizeof(int));
    for(int i = 0;i<5;i++) {
        arr[i] = rand() % 5 + 1;
        printf("%d\n", arr[i]);
    }
    printf("%d\n",binarySearch(arr, 0, 5, 4));
    free(arr);  // free the memory allocated by calloc
    return 0;
}


int binarySearch (int arr[], int low, int high, int k) {
    // BEST CASE, AVG CASE: k == arr[mid]
    // WORST CASE: arr[0] || arr[len -1] == k || !k in arr
    int mid = low + (high - low)/2;
    if(low > high) return -1;
    if(arr[mid] == k) {
        return 1;
    }
    if(arr[mid] < k) {
        return binarySearch(arr,mid+1,high,k);
    }
    if(arr[mid] > k) {
        return binarySearch(arr,low,mid-1,k);
    }
    return -1;
}
```
