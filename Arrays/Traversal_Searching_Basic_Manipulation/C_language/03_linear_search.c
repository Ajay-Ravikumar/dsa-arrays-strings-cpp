#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) if (arr[i] == key) return i;
    return -1;
}

int main() {
    int arr[] = {7, 2, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    int idx = linearSearch(arr, n, key);
    printf("Index = %d\n", idx);
    return 0;
}
