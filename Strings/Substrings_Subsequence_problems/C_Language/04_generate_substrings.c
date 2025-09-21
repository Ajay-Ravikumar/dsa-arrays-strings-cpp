/* Generate All Substrings */

#include <stdio.h>
#include <string.h>

void generateSubstrings(char* s) {
    int n=strlen(s);
    for (int i=0;i<n;i++) {
        for (int j=i;j<n;j++) {
            for (int k=i;k<=j;k++) printf("%c",s[k]);
            printf("\n");
        }
    }
}

int main() {
    char s[]="abc";
    generateSubstrings(s);
    return 0;
}
