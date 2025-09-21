/* Maximum Sum Subarray of Size k */

#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    int sum = 0;
    for (int i=0;i<k;i++) sum += arr[i];
    int maxSum = sum;
    for (int i=k;i<n;i++) {
        sum += arr[i] - arr[i-k];
        if (sum > maxSum) maxSum = sum;
    }
    return maxSum;
}

int main() {
    int arr[] = {2,1,5,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Max Sum = %d\n", maxSumSubarray(arr,n,3));
    return 0;
}
