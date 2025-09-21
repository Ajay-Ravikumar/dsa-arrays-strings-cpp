/* Minimum Window Substring (classic sliding window) */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string minWindow(string s, string t) {
    unordered_map<char,int> need;
    for (char c : t) need[c]++;
    int requiredLen=t.size(), count=0, l=0, start=0, minLen=1e9;
    unordered_map<char,int> have;
    for (int r=0;r<s.size();r++) {
        if (need.count(s[r])) {
            have[s[r]]++;
            if (have[s[r]] <= need[s[r]]) count++;
        }
        while (count==requiredLen) {
            if (r-l+1 < minLen) { minLen=r-l+1; start=l; }
            if (need.count(s[l])) {
                have[s[l]]--;
                if (have[s[l]] < need[s[l]]) count--;
            }
            l++;
        }
    }
    return (minLen==1e9) ? "" : s.substr(start,minLen);
}

int main() {
    string s="ADOBECODEBANC", t="ABC";
    cout << "Min Window = " << minWindow(s,t) << endl;
}
