/* Count Palindromic Substrings */

#include <stdio.h>
#include <string.h>

int countSubstrings(char* s) {
    int n=strlen(s), count=0;
    for (int center=0;center<n;center++) {
        int l=center, r=center;
        while (l>=0 && r<n && s[l]==s[r]) { count++; l--; r++; }
        l=center; r=center+1;
        while (l>=0 && r<n && s[l]==s[r]) { count++; l--; r++; }
    }
    return count;
}

int main() {
    char s[]="aaa";
    printf("Count Palindromic Substrings = %d\n", countSubstrings(s));
    return 0;
}
