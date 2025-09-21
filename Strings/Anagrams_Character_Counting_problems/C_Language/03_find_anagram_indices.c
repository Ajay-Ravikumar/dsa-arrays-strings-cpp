/* Find All Anagram Indices of a Pattern */

#include <stdio.h>
#include <string.h>

int isEqual(int* a,int* b) {
    for (int i=0;i<256;i++) if (a[i]!=b[i]) return 0;
    return 1;
}

void findAnagrams(char* s, char* p) {
    int ns=strlen(s), np=strlen(p);
    if (np>ns) return;
    int countP[256]={0}, countS[256]={0};
    for (int i=0;i<np;i++) {
        countP[(unsigned char)p[i]]++;
        countS[(unsigned char)s[i]]++;
    }
    for (int i=0;i<=ns-np;i++) {
        if (isEqual(countP,countS)) printf("Anagram at index %d\n", i);
        countS[(unsigned char)s[i]]--;
        if (i+np<ns) countS[(unsigned char)s[i+np]]++;
    }
}

int main() {
    char s[]="cbaebabacd", p[]="abc";
    findAnagrams(s,p);
    return 0;
}
