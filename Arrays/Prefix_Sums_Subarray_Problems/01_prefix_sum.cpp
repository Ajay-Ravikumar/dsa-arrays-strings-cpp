/* Compute Prefix Sums & Answer Range-Sum Queries */

#include <iostream>
#include <vector>
using namespace std;

vector<int> buildPrefix(const vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) prefix[i] = prefix[i-1] + arr[i];
    return prefix;
}

int rangeSum(const vector<int>& prefix, int l, int r) {
    return l == 0 ? prefix[r] : prefix[r] - prefix[l-1];
}

int main() {
    vector<int> arr = {2,4,6,8,10};
    auto prefix = buildPrefix(arr);
    cout << "Sum [1..3] = " << rangeSum(prefix,1,3) << endl;
}
