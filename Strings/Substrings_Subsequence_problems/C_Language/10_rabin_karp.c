/* Rabin-Karp (Pattern Matching) */

#include <stdio.h>
#include <string.h>
#define d 256
#define q 101

void search(char* pat,char* txt) {
    int m=strlen(pat), n=strlen(txt);
    int i,j,h=1,p=0,t=0;
    for (i=0;i<m-1;i++) h=(h*d)%q;
    for (i=0;i<m;i++) {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
    for (i=0;i<=n-m;i++) {
        if (p==t) {
            for (j=0;j<m;j++) if (txt[i+j]!=pat[j]) break;
            if (j==m) printf("Pattern found at %d\n",i);
        }
        if (i<n-m) {
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if (t<0) t+=q;
        }
    }
}

int main() {
    char txt[]="abedabc", pat[]="abc";
    search(pat,txt);
    return 0;
}
