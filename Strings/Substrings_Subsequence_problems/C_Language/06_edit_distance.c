/* Edit Distance (Levenshtein Distance) */

#include <stdio.h>
#include <string.h>

int min(int a,int b){return a<b?a:b;}

int editDistance(char* s1,char* s2) {
    int n=strlen(s1), m=strlen(s2);
    int dp[n+1][m+1];
    for (int i=0;i<=n;i++) dp[i][0]=i;
    for (int j=0;j<=m;j++) dp[0][j]=j;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
        }
    }
    return dp[n][m];
}

int main() {
    char s1[]="horse", s2[]="ros";
    printf("Edit Distance = %d\n", editDistance(s1,s2));
    return 0;
}
