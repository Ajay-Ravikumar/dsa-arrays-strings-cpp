/* Minimum Size Subarray with Sum ≥ Target */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, const vector<int>& arr) {
    int left=0, sum=0, ans=INT_MAX;
    for (int right=0; right<arr.size(); right++) {
        sum += arr[right];
        while (sum >= target) {
            ans = min(ans, right-left+1);
            sum -= arr[left++];
        }
    }
    return (ans==INT_MAX) ? 0 : ans;
}

int main() {
    vector<int> arr = {2,3,1,2,4,3};
    cout << "Min Length = " << minSubArrayLen(7,arr) << endl;
}
