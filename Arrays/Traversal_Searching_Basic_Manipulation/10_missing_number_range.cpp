/* Find Missing Number in Range (1…n) */

#include <iostream>
#include <vector>
using namespace std;

int findMissing(const vector<int>& arr) {
    int n = arr.size();
    int total = (n+1) * (n+2) / 2;
    for (int x : arr) total -= x;
    return total;
}

int main() {
    vector<int> arr = {1,2,4,5,6};
    cout << "Missing Number = " << findMissing(arr) << endl;
}
