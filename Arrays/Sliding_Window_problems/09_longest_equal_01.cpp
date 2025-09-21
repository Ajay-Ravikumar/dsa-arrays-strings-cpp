/* Longest Substring with Equal Number of 0s and 1s */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestEqual01(const vector<int>& arr) {
    unordered_map<int,int> mp;
    mp[0]=-1;
    int prefix=0, maxLen=0;
    for (int i=0;i<arr.size();i++) {
        prefix += (arr[i]==1)?1:-1;
        if (mp.count(prefix)) {
            maxLen=max(maxLen,i-mp[prefix]);
        } else {
            mp[prefix]=i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr={0,1,0,1,1,0,0};
    cout << "Longest Equal 0-1 = " << longestEqual01(arr) << endl;
}
