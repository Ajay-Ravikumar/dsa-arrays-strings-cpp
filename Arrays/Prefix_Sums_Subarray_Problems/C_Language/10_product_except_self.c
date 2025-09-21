/* Product of Array Except Self */

#include <stdio.h>

void productExceptSelf(int arr[], int n, int res[]) {
    int left[n], right[n];
    left[0] = 1;
    for (int i=1;i<n;i++) left[i] = left[i-1] * arr[i-1];
    right[n-1] = 1;
    for (int i=n-2;i>=0;i--) right[i] = right[i+1] * arr[i+1];
    for (int i=0;i<n;i++) res[i] = left[i] * right[i];
}

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res[n];
    productExceptSelf(arr,n,res);
    for (int i=0;i<n;i++) printf("%d ", res[i]);
    return 0;
}
