/* Smallest Window Containing All Characters of Another String */

#include <stdio.h>
#include <string.h>
#include <limits.h>

char* smallestWindow(char* s, char* t, char* result) {
    int need[256]={0}, have[256]={0};
    int required=0;
    for (int i=0;t[i];i++) if (need[(unsigned char)t[i]]++ == 0) required++;
    int formed=0, l=0, r=0, start=0, minLen=INT_MAX;

    while (s[r]) {
        char c = s[r];
        have[(unsigned char)c]++;
        if (have[(unsigned char)c]==need[(unsigned char)c]) formed++;

        while (formed==required) {
            if (r-l+1 < minLen) {
                minLen = r-l+1; start=l;
            }
            char c2 = s[l];
            have[(unsigned char)c2]--;
            if (have[(unsigned char)c2] < need[(unsigned char)c2]) formed--;
            l++;
        }
        r++;
    }
    if (minLen==INT_MAX) strcpy(result,"");
    else {
        strncpy(result,s+start,minLen);
        result[minLen]='\0';
    }
    return result;
}

int main() {
    char s[]="ADOBECODEBANC", t[]="ABC", result[100];
    printf("Smallest Window = %s\n", smallestWindow(s,t,result));
    return 0;
}
