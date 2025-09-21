/* Maximum Circular Subarray Sum */

#include <iostream>
#include <vector>
using namespace std;

int kadane(const vector<int>& arr) {
    int maxSoFar = arr[0], cur = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        cur = max(arr[i], cur + arr[i]);
        maxSoFar = max(maxSoFar, cur);
    }
    return maxSoFar;
}

int maxCircularSubarray(vector<int> arr) {
    int normal = kadane(arr);
    int total = 0;
    for (int& x : arr) { total += x; x = -x; }
    int inverted = kadane(arr);
    int circular = total + inverted;
    return (circular == 0) ? normal : max(normal, circular);
}

int main() {
    vector<int> arr = {5,-3,5};
    cout << "Max Circular Subarray Sum = " << maxCircularSubarray(arr) << endl;
}
