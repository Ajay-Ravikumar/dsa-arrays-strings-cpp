/* Minimum Size Subarray with Sum ≥ Target */

#include <stdio.h>
#include <limits.h>

int minSubArrayLen(int target, int arr[], int n) {
    int left = 0, sum = 0, ans = INT_MAX;
    for (int right=0; right<n; right++) {
        sum += arr[right];
        while (sum >= target) {
            int len = right-left+1;
            if (len < ans) ans = len;
            sum -= arr[left++];
        }
    }
    return (ans == INT_MAX) ? 0 : ans;
}

int main() {
    int arr[] = {2,3,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Min Length = %d\n", minSubArrayLen(7,arr,n));
    return 0;
}
