/* Maximum of All Subarrays of Size k (Deque) */

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void maxSubarrayK(const vector<int>& arr, int k) {
    deque<int> dq;
    for (int i=0;i<arr.size();i++) {
        while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() <= i-k) dq.pop_front();
        if (i >= k-1) cout << arr[dq.front()] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    maxSubarrayK(arr,3);
}
