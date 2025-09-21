/* Rabin-Karp (Pattern Matching) */

#include <iostream>
#include <string>
using namespace std;

#define d 256
#define q 101

void search(string pat,string txt) {
    int m=pat.size(), n=txt.size();
    int h=1,p=0,t=0;
    for (int i=0;i<m-1;i++) h=(h*d)%q;
    for (int i=0;i<m;i++) {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
    for (int i=0;i<=n-m;i++) {
        if (p==t && txt.substr(i,m)==pat) cout<<"Pattern at "<<i<<endl;
        if (i<n-m) {
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if (t<0) t+=q;
        }
    }
}

int main() {
    string txt="abedabc", pat="abc";
    search(pat,txt);
}
