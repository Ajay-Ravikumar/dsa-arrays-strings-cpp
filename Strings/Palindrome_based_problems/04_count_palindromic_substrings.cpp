/* Count Palindromic Substrings */

#include <iostream>
#include <string>
using namespace std;

int countSubstrings(string s) {
    int n=s.size(), count=0;
    for (int center=0;center<n;center++) {
        int l=center,r=center;
        while (l>=0 && r<n && s[l]==s[r]) { count++; l--; r++; }
        l=center; r=center+1;
        while (l>=0 && r<n && s[l]==s[r]) { count++; l--; r++; }
    }
    return count;
}

int main() {
    string s="aaa";
    cout << "Count Palindromic Substrings = " << countSubstrings(s) << endl;
}
