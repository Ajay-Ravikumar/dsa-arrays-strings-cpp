/* Longest Repeating Substring */

#include <stdio.h>
#include <string.h>

int longestRepeatingSubstring(char* s) {
    int n=strlen(s), maxLen=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            int len=0;
            while (j+len<n && s[i+len]==s[j+len]) { len++; }
            if (len>maxLen) maxLen=len;
        }
    }
    return maxLen;
}

int main() {
    char s[]="banana";
    printf("Longest Repeating Substring length = %d\n", longestRepeatingSubstring(s));
    return 0;
}
