/* Longest Substring with All Vowels in Order */

#include <iostream>
#include <string>
using namespace std;

int longestVowelSubstring(string s) {
    string v="aeiou";
    int n=s.size(), maxLen=0;
    for (int i=0;i<n;i++) {
        int j=i,k=0;
        while (j<n && k<5) {
            if (s[j]==v[k]) j++;
            else if (k<4 && s[j]==v[k+1]) k++;
            else break;
        }
        if (k==4) {
            while (j<n && s[j]=='u') j++;
            maxLen=max(maxLen,j-i);
        }
    }
    return maxLen;
}

int main() {
    string s="aeiaaioaaaaeiiiiouuuooaauuaeiu";
    cout<<"Longest Vowel Substring length = "<<longestVowelSubstring(s)<<endl;
}
