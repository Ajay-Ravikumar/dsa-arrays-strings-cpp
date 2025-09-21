/* Count Subarrays with Sum = k */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSubarrays(const vector<int>& arr, int k) {
    unordered_map<int,int> mp;
    mp[0] = 1;
    int sum = 0, count = 0;
    for (int x : arr) {
        sum += x;
        if (mp.count(sum-k)) count += mp[sum-k];
        mp[sum]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,3};
    cout << "Count = " << countSubarrays(arr,3) << endl;
}
