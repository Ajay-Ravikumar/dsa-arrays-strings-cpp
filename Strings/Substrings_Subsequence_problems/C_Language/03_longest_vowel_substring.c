/* Longest Substring with All Vowels in Order */

#include <stdio.h>
#include <string.h>

int longestVowelSubstring(char* s) {
    char vowels[]="aeiou";
    int n=strlen(s), maxLen=0;
    for (int i=0;i<n;i++) {
        int j=i,k=0;
        while (j<n && k<5) {
            if (s[j]==vowels[k]) j++;
            else if (k<4 && s[j]==vowels[k+1]) k++;
            else break;
        }
        if (k==4) {
            while (j<n && s[j]=='u') j++;
            if (j-i>maxLen) maxLen=j-i;
        }
    }
    return maxLen;
}

int main() {
    char s[]="aeiaaioaaaaeiiiiouuuooaauuaeiu";
    printf("Longest Vowel Substring length = %d\n", longestVowelSubstring(s));
    return 0;
}
