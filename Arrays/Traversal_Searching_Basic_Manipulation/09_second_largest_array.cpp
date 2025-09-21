/* Find the Second Largest (or Kth Largest) Element */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;
    for (int x : arr) {
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x != first) {
            second = x;
        }
    }
    return (second == INT_MIN) ? -1 : second;
}

int main() {
    vector<int> arr = {10, 5, 20, 8};
    cout << "Second Largest = " << secondLargest(arr) << endl;
}
