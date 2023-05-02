#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int linear_search(int arr[], int len, int k);

int main() {
    int *arr = (int*)calloc(5,sizeof(int));
    for(int i = 0;i<5;i++) {
        arr[i] = i;
        printf("%d \n",arr[i]);
    }
    printf("%d",linear_search(arr, 5, 2));
    free(arr);  // free the memory allocated by calloc
    return 0;
}

int linear_search(int arr[], int len, int k) {
    for(int i=0;i<len;i++) {
        if(arr[i] == k) {
            return 1;
        }
    }
    return -1;
}
