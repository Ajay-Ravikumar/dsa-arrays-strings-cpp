/* Minimum Insertions to Make String Palindrome */

#include <stdio.h>
#include <string.h>

int max(int a,int b){return a>b?a:b;}

int minInsertions(char* s) {
    int n=strlen(s);
    int dp[n][n];
    for (int i=0;i<n;i++) dp[i][i]=1;
    for (int len=2;len<=n;len++) {
        for (int i=0;i<=n-len;i++) {
            int j=i+len-1;
            if (s[i]==s[j] && len==2) dp[i][j]=2;
            else if (s[i]==s[j]) dp[i][j]=dp[i+1][j-1]+2;
            else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        }
    }
    return n - dp[0][n-1];
}

int main() {
    char s[]="mbadm";
    printf("Min Insertions = %d\n", minInsertions(s));
    return 0;
}
