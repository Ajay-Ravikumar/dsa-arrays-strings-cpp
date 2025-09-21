/* Minimum Window Substring (classic sliding window) */

#include <stdio.h>
#include <string.h>
#include <limits.h>

char* minWindow(char* s, char* t, char* result) {
    int need[256]={0}, have[256]={0};
    for (int i=0;t[i];i++) need[(unsigned char)t[i]]++;
    int requiredLen = strlen(t);
    int l=0, count=0, start=0, minLen=INT_MAX;

    for (int r=0;s[r];r++) {
        if (need[(unsigned char)s[r]] > 0) {
            have[(unsigned char)s[r]]++;
            if (have[(unsigned char)s[r]] <= need[(unsigned char)s[r]]) count++;
        }
        while (count==requiredLen) {
            if (r-l+1 < minLen) { minLen=r-l+1; start=l; }
            if (need[(unsigned char)s[l]]>0) {
                have[(unsigned char)s[l]]--;
                if (have[(unsigned char)s[l]] < need[(unsigned char)s[l]]) count--;
            }
            l++;
        }
    }
    if (minLen==INT_MAX) strcpy(result,"");
    else { strncpy(result,s+start,minLen); result[minLen]='\0'; }
    return result;
}

int main() {
    char s[]="ADOBECODEBANC", t[]="ABC", result[100];
    printf("Min Window = %s\n", minWindow(s,t,result));
    return 0;
}
