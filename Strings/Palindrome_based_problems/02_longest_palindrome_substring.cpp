/* Longest Palindromic Substring */

#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n=s.size(), start=0, maxLen=1;
    for (int center=0; center<n; center++) {
        int l=center, r=center;
        while (l>=0 && r<n && s[l]==s[r]) {
            if (r-l+1 > maxLen) { start=l; maxLen=r-l+1; }
            l--; r++;
        }
        l=center; r=center+1;
        while (l>=0 && r<n && s[l]==s[r]) {
            if (r-l+1 > maxLen) { start=l; maxLen=r-l+1; }
            l--; r++;
        }
    }
    return s.substr(start,maxLen);
}

int main() {
    string s="babad";
    cout << "Longest Palindrome Substring = " << longestPalindrome(s) << endl;
}
