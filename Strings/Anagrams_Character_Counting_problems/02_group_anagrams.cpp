/* Group Anagrams Together */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (auto &s: strs) {
        string key=s;
        sort(key.begin(),key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> res;
    for (auto &p: mp) res.push_back(p.second);
    return res;
}

int main() {
    vector<string> words={"eat","tea","tan","ate","nat","bat"};
    auto groups=groupAnagrams(words);
    for (auto &grp: groups) {
        for (auto &w: grp) cout<<w<<" ";
        cout<<endl;
    }
}
