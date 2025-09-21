/* Smallest Substring Containing All Characters of Another String */

#include <stdio.h>
#include <string.h>
#include <limits.h>

void minWindow(char* s, char* t) {
    int ns=strlen(s), nt=strlen(t);
    int need[256]={0}, have[256]={0}, required=0;
    for (int i=0;i<nt;i++) {
        if (need[(unsigned char)t[i]]==0) required++;
        need[(unsigned char)t[i]]++;
    }
    int formed=0, l=0, minLen=INT_MAX, start=0;
    for (int r=0;r<ns;r++) {
        have[(unsigned char)s[r]]++;
        if (have[(unsigned char)s[r]]==need[(unsigned char)s[r]]) formed++;
        while (l<=r && formed==required) {
            if (r-l+1<minLen) { minLen=r-l+1; start=l; }
            have[(unsigned char)s[l]]--;
            if (have[(unsigned char)s[l]]<need[(unsigned char)s[l]]) formed--;
            l++;
        }
    }
    if (minLen==INT_MAX) printf("No substring found\n");
    else {
        char ans[minLen+1];
        strncpy(ans,s+start,minLen);
        ans[minLen]='\0';
        printf("Smallest window = %s\n", ans);
    }
}

int main() {
    char s[]="ADOBECODEBANC", t[]="ABC";
    minWindow(s,t);
    return 0;
}
