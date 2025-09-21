/* Longest Repeating Substring */

#include <iostream>
#include <string>
using namespace std;

int longestRepeatingSubstring(string s) {
    int n=s.size(), maxLen=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            int len=0;
            while (j+len<n && s[i+len]==s[j+len]) len++;
            maxLen=max(maxLen,len);
        }
    }
    return maxLen;
}

int main() {
    string s="banana";
    cout<<"Longest Repeating Substring length = "<<longestRepeatingSubstring(s)<<endl;
}
