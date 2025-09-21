#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Index = %d\n", binarySearch(arr, n, 5));
    return 0;
}
