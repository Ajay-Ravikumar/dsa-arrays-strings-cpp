/* Longest Increasing Subsequence */

#include <stdio.h>

int max(int a,int b){return a>b?a:b;}

int LIS(int arr[],int n) {
    int dp[n],maxLen=1;
    for (int i=0;i<n;i++) dp[i]=1;
    for (int i=1;i<n;i++) {
        for (int j=0;j<i;j++) {
            if (arr[i]>arr[j]) dp[i]=max(dp[i],dp[j]+1);
        }
        if (dp[i]>maxLen) maxLen=dp[i];
    }
    return maxLen;
}

int main() {
    int arr[]={10,9,2,5,3,7,101,18},n=8;
    printf("LIS length = %d\n", LIS(arr,n));
    return 0;
}
