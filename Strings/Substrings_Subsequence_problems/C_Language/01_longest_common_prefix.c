/* Longest Common Prefix Among Strings */

#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][50], int n, char* res) {
    if (n==0) { res[0]='\0'; return res; }
    strcpy(res, strs[0]);
    for (int i=1;i<n;i++) {
        while (strncmp(res, strs[i], strlen(res))!=0) {
            res[strlen(res)-1]='\0';
            if (strlen(res)==0) return res;
        }
    }
    return res;
}

int main() {
    char arr[3][50]={"flower","flow","flight"};
    char res[50];
    printf("LCP = %s\n", longestCommonPrefix(arr,3,res));
    return 0;
}
