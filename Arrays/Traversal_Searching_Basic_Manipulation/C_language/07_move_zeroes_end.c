/* Move All Zeros to the End */

#include <stdio.h>

void moveZeros(int arr[], int n) {
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            j++;
        }
    }
}

int main() {
    int arr[] = {0,1,0,3,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr, n);
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
