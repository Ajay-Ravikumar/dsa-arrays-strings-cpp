/* Maximum Circular Subarray Sum */

#include <stdio.h>
#include <limits.h>

int kadane(int arr[], int n) {
    int maxSoFar = arr[0], cur = arr[0];
    for (int i = 1; i < n; i++) {
        cur = (cur > 0 ? cur + arr[i] : arr[i]);
        if (cur > maxSoFar) maxSoFar = cur;
    }
    return maxSoFar;
}

int maxCircularSubarray(int arr[], int n) {
    int normal = kadane(arr,n);
    int total = 0;
    for (int i=0;i<n;i++) total += arr[i], arr[i] = -arr[i];
    int inverted = kadane(arr,n);
    int circular = total + inverted;
    return (circular == 0) ? normal : (normal > circular ? normal : circular);
}

int main() {
    int arr[] = {5,-3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Max Circular Subarray Sum = %d\n", maxCircularSubarray(arr,n));
    return 0;
}
