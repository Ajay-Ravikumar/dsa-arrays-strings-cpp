/* Longest Palindromic Substring */

#include <stdio.h>
#include <string.h>

void longestPalindrome(char* s, char* result) {
    int n = strlen(s);
    int start=0, maxLen=1;
    for (int center=0; center<n; center++) {
        // Odd length
        int l=center, r=center;
        while (l>=0 && r<n && s[l]==s[r]) {
            if (r-l+1 > maxLen) { start=l; maxLen=r-l+1; }
            l--; r++;
        }
        // Even length
        l=center; r=center+1;
        while (l>=0 && r<n && s[l]==s[r]) {
            if (r-l+1 > maxLen) { start=l; maxLen=r-l+1; }
            l--; r++;
        }
    }
    strncpy(result,s+start,maxLen);
    result[maxLen]='\0';
}

int main() {
    char s[]="babad", result[100];
    longestPalindrome(s,result);
    printf("Longest Palindrome Substring = %s\n", result);
    return 0;
}
