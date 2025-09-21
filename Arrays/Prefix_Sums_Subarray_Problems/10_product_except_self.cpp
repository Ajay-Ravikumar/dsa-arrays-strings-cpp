/* Product of Array Except Self */

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(const vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, 1);
    
    // Prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        res[i] = prefix;
        prefix *= arr[i];
    }
    
    // Suffix product
    int suffix = 1;
    for (int i = n-1; i >= 0; i--) {
        res[i] *= suffix;
        suffix *= arr[i];
    }
    
    return res;
}

int main() {
    vector<int> arr = {1,2,3,4};
    vector<int> res = productExceptSelf(arr);
    for (int x : res) cout << x << " ";
    cout << endl;
    return 0;
}
