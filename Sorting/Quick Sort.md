# Quick Sort
- Quick sort is a divide-and-conquer sorting algorithm that works by selecting a pivot element and partitioning the array around the pivot, such that all elements smaller than the pivot are placed before it and all elements greater than the pivot are placed after it. The algorithm then recursively sorts the subarrays on either side of the pivot.
- The average case scenario of quick sort occurs when the pivot divides the array into roughly equal-sized subarrays. In this case, each element is compared with every other element in the array an average of log(n) times, where n is the size of the array. Therefore, the average-case time complexity of quick sort is O(n log(n)).
- The best case scenario of quick sort occurs when the pivot always divides the array into two equal-sized subarrays. In this case, the recursion tree is perfectly balanced, and the algorithm takes O(n log(n)) time to sort the array.
- The worst case scenario of quick sort occurs when the pivot always selects the smallest or largest element in the array, causing the algorithm to partition the array into two subarrays of size n-1 and 0. This degenerate case can occur if the input array is already sorted or if all elements in the array are equal. The worst-case time complexity of quick sort is O(n^2).
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int* arr = (int*)calloc(n,sizeof(int));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 20 + 1;
    }
    printArray(arr,n);
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition (int arr[], int low, int high ) {
    int pivot = arr[low];
    int i=low,j=high;
    while(i<j) {
        while(arr[i] <= pivot && i<high) {
            i++;
        }
        while(arr[j] >= pivot && j>low ) {
            j--;
        }
        if(i<j) swap(&arr[i],&arr[j]);
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}
```
