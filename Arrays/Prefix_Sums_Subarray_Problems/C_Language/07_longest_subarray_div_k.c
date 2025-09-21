/* Longest Subarray with Sum Divisible by k */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longestSubarrayDivK(int arr[], int n, int k) {
    int modIndex[k]; 
    for (int i=0;i<k;i++) modIndex[i] = -2;
    modIndex[0] = -1;
    int sum=0, ans=0;
    for (int i=0;i<n;i++) {
        sum += arr[i];
        int mod = ((sum % k) + k) % k;
        if (modIndex[mod] != -2)
            if (i - modIndex[mod] > ans) ans = i - modIndex[mod];
        else modIndex[mod] = i;
    }
    return ans;
}

int main() {
    int arr[] = {2,7,6,1,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Longest length = %d\n", longestSubarrayDivK(arr,n,3));
    return 0;
}
