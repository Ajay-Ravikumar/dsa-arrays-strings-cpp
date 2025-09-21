/* Longest Substring Without Repeating Characters */

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(const string& s) {
    unordered_map<char,int> last;
    int start=0, maxLen=0;
    for (int i=0;i<s.size();i++) {
        if (last.count(s[i]) && last[s[i]] >= start)
            start = last[s[i]] + 1;
        last[s[i]] = i;
        maxLen = max(maxLen, i-start+1);
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest Unique = " << lengthOfLongestSubstring(s) << endl;
}
