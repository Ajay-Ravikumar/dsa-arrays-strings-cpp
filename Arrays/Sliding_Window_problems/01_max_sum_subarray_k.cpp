/* Maximum Sum Subarray of Size k */

#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(const vector<int>& arr, int k) {
    int sum = 0;
    for (int i=0;i<k;i++) sum += arr[i];
    int maxSum = sum;
    for (int i=k;i<arr.size();i++) {
        sum += arr[i] - arr[i-k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main() {
    vector<int> arr = {2,1,5,1,3,2};
    cout << "Max Sum = " << maxSumSubarray(arr,3) << endl;
}
