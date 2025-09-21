/* Check if Two Strings are Anagrams */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    vector<int> count(256,0);
    for (int i=0;i<s1.size();i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int c:count) if (c!=0) return false;
    return true;
}

int main() {
    string s1="listen", s2="silent";
    cout << (isAnagram(s1,s2) ? "Anagram" : "Not Anagram") << endl;
}
