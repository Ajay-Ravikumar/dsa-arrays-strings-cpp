/* Longest Subarray with at Most K Distinct Elements */

#include <stdio.h>
#include <string.h>

int longestSubarrayK(int arr[], int n, int k) {
    int freq[1001]; memset(freq,0,sizeof(freq));
    int left=0, distinct=0, maxLen=0;
    for (int right=0; right<n; right++) {
        if (freq[arr[right]]++ == 0) distinct++;
        while (distinct > k) {
            if (--freq[arr[left]] == 0) distinct--;
            left++;
        }
        int len = right-left+1;
        if (len > maxLen) maxLen = len;
    }
    return maxLen;
}

int main() {
    int arr[] = {1,2,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Longest = %d\n", longestSubarrayK(arr,n,2));
    return 0;
}
