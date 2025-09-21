/* Compute Prefix Sums & Answer Range-Sum Queries */

#include <stdio.h>

void buildPrefix(int arr[], int n, int prefix[]) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) prefix[i] = prefix[i-1] + arr[i];
}

int rangeSum(int prefix[], int l, int r) {
    if (l == 0) return prefix[r];
    return prefix[r] - prefix[l-1];
}

int main() {
    int arr[] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    buildPrefix(arr, n, prefix);
    printf("Sum [1..3] = %d\n", rangeSum(prefix,1,3));
    return 0;
}
