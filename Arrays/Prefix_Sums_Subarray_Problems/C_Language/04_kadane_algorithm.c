/* Maximum Subarray Sum (Kadane’s Algorithm) */

#include <stdio.h>
#include <limits.h>

int kadane(int arr[], int n) {
    int maxSoFar = arr[0], cur = arr[0];
    for (int i = 1; i < n; i++) {
        if (cur < 0) cur = arr[i];
        else cur += arr[i];
        if (cur > maxSoFar) maxSoFar = cur;
    }
    return maxSoFar;
}

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Max Subarray Sum = %d\n", kadane(arr, n));
    return 0;
}
