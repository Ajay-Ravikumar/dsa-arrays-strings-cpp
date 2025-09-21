/* Longest Substring Without Repeating Characters */

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int last[256];
    for (int i=0;i<256;i++) last[i] = -1;
    int start=0, maxLen=0;
    for (int i=0; s[i]; i++) {
        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;
        last[(unsigned char)s[i]] = i;
        int len = i - start + 1;
        if (len > maxLen) maxLen = len;
    }
    return maxLen;
}

int main() {
    char s[] = "abcabcbb";
    printf("Longest Unique = %d\n", lengthOfLongestSubstring(s));
    return 0;
}
