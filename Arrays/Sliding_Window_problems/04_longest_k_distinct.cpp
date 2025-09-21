/* Longest Subarray with at Most K Distinct Elements */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayK(const vector<int>& arr, int k) {
    unordered_map<int,int> freq;
    int left=0, maxLen=0;
    for (int right=0; right<arr.size(); right++) {
        freq[arr[right]]++;
        while (freq.size() > k) {
            if (--freq[arr[left]] == 0) freq.erase(arr[left]);
            left++;
        }
        maxLen = max(maxLen, right-left+1);
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1,2,1,2,3};
    cout << "Longest = " << longestSubarrayK(arr,2) << endl;
}
