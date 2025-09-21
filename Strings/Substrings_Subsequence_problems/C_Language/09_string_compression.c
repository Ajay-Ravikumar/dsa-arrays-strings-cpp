/* string_compression */

#include <stdio.h>
#include <string.h>

void compress(char* s,char* res) {
    int n=strlen(s), idx=0;
    for (int i=0;i<n;) {
        char c=s[i]; int count=0;
        while (i<n && s[i]==c) { i++; count++; }
        res[idx++]=c;
        idx+=sprintf(res+idx,"%d",count);
    }
    res[idx]='\0';
}

int main() {
    char s[]="aaabbc", res[50];
    compress(s,res);
    printf("Compressed = %s\n", res);
    return 0;
}
