/* Generate All Substrings */

#include <iostream>
#include <string>
using namespace std;

void generateSubstrings(string s) {
    for (int i=0;i<s.size();i++) {
        for (int j=i;j<s.size();j++) {
            cout<<s.substr(i,j-i+1)<<endl;
        }
    }
}

int main() {
    string s="abc";
    generateSubstrings(s);
}
