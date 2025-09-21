/* Smallest Window Containing All Characters of Another String */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string smallestWindow(string s, string t) {
    unordered_map<char,int> need, have;
    for (char c : t) need[c]++;
    int required = need.size(), formed=0, l=0, start=0, minLen=1e9;
    for (int r=0;r<s.size();r++) {
        have[s[r]]++;
        if (need.count(s[r]) && have[s[r]]==need[s[r]]) formed++;
        while (formed==required) {
            if (r-l+1 < minLen) {
                minLen=r-l+1; start=l;
            }
            have[s[l]]--;
            if (need.count(s[l]) && have[s[l]]<need[s[l]]) formed--;
            l++;
        }
    }
    return (minLen==1e9) ? "" : s.substr(start,minLen);
}

int main() {
    string s="ADOBECODEBANC", t="ABC";
    cout << "Smallest Window = " << smallestWindow(s,t) << endl;
}
