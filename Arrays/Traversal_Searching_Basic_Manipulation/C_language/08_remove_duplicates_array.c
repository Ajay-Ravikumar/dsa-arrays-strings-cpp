/* Remove Duplicates from a Sorted Array (in-place) */

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
}

int main() {
    int arr[] = {1,1,2,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int len = removeDuplicates(arr, n);
    for (int i=0; i<len; i++) printf("%d ", arr[i]);
    return 0;
}
