/* Subarray with Given Sum (Positive Numbers) */

#include <iostream>
#include <vector>
using namespace std;

void subarraySum(const vector<int>& arr, int target) {
    int start = 0, sum = 0;
    for (int end = 0; end < arr.size(); end++) {
        sum += arr[end];
        while (sum > target && start < end) sum -= arr[start++];
        if (sum == target) {
            cout << "Subarray [" << start << ".." << end << "]" << endl;
            return;
        }
    }
    cout << "No subarray found" << endl;
}

int main() {
    vector<int> arr = {1,2,3,7,5};
    subarraySum(arr, 12);
}
