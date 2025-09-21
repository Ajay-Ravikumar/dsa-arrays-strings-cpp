/* Find All Anagram Indices of a Pattern */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s,string p) {
    if (p.size()>s.size()) return {};
    vector<int> res, countP(26,0), countS(26,0);
    for (int i=0;i<p.size();i++) {
        countP[p[i]-'a']++;
        countS[s[i]-'a']++;
    }
    for (int i=0;i<=s.size()-p.size();i++) {
        if (countP==countS) res.push_back(i);
        countS[s[i]-'a']--;
        if (i+p.size()<s.size()) countS[s[i+p.size()]-'a']++;
    }
    return res;
}

int main() {
    string s="cbaebabacd", p="abc";
    vector<int> ans=findAnagrams(s,p);
    for (int idx:ans) cout<<"Anagram at index "<<idx<<endl;
}
