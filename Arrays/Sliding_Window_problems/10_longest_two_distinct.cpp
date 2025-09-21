/* Longest Substring with at Most Two Distinct Characters */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longestTwoDistinct(const string& s) {
    unordered_map<char,int> freq;
    int left=0, maxLen=0;
    for (int right=0; right<s.size(); right++) {
        freq[s[right]]++;
        while (freq.size()>2) {
            if (--freq[s[left]]==0) freq.erase(s[left]);
            left++;
        }
        maxLen=max(maxLen,right-left+1);
    }
    return maxLen;
}

int main() {
    string s="eceba";
    cout << "Longest Two Distinct = " << longestTwoDistinct(s) << endl;
}
