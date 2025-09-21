/* Subarray with Given Sum (Positive Numbers) */

#include <stdio.h>

void subarraySum(int arr[], int n, int target) {
    int start = 0, sum = 0;
    for (int end = 0; end < n; end++) {
        sum += arr[end];
        while (sum > target && start < end) sum -= arr[start++];
        if (sum == target) {
            printf("Subarray [%d..%d]\n", start, end);
            return;
        }
    }
    printf("No subarray found\n");
}

int main() {
    int arr[] = {1,2,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    subarraySum(arr, n, 12);
    return 0;
}
