/* Longest Substring with at Most Two Distinct Characters */

#include <stdio.h>
#include <string.h>

int longestTwoDistinct(char* s) {
    int freq[256]={0};
    int left=0, distinct=0, maxLen=0;
    for (int right=0;s[right];right++) {
        if (freq[(unsigned char)s[right]]++ == 0) distinct++;
        while (distinct>2) {
            if (--freq[(unsigned char)s[left]]==0) distinct--;
            left++;
        }
        int len=right-left+1;
        if (len>maxLen) maxLen=len;
    }
    return maxLen;
}

int main() {
    char s[]="eceba";
    printf("Longest Two Distinct = %d\n", longestTwoDistinct(s));
    return 0;
}
