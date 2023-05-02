# Insertion Sort
- Recursive
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
- Iterative
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
