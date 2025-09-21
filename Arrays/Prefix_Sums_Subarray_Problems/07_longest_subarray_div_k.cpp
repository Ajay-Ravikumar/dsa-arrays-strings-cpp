/* Longest Subarray with Sum Divisible by k */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayDivK(const vector<int>& arr, int k) {
    unordered_map<int,int> mp;
    mp[0] = -1;
    int sum = 0, ans = 0;
    for (int i=0;i<arr.size();i++) {
        sum += arr[i];
        int mod = ((sum % k) + k) % k;
        if (mp.count(mod)) ans = max(ans, i - mp[mod]);
        else mp[mod] = i;
    }
    return ans;
}

int main() {
    vector<int> arr = {2,7,6,1,4,5};
    cout << "Longest length = " << longestSubarrayDivK(arr,3) << endl;
}
