/* String Compression */

#include <iostream>
#include <string>
using namespace std;

string compress(string s) {
    string res="";
    for (int i=0;i<s.size();) {
        char c=s[i]; int count=0;
        while (i<s.size() && s[i]==c) { i++; count++; }
        res+=c+to_string(count);
    }
    return res.size()<s.size()?res:s;
}

int main() {
    string s="aaabbc";
    cout<<"Compressed = "<<compress(s)<<endl;
}
