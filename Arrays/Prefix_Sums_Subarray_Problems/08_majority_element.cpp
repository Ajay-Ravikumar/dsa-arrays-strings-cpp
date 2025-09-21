/* Majority Element (Boyer-Moore Voting) */

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& arr) {
    int cand = arr[0], count = 1;
    for (int i=1;i<arr.size();i++) {
        if (arr[i] == cand) count++;
        else count--;
        if (count == 0) { cand = arr[i]; count = 1; }
    }
    count = 0;
    for (int x : arr) if (x == cand) count++;
    return (count > arr.size()/2) ? cand : -1;
}

int main() {
    vector<int> arr = {2,2,1,1,2,2,2};
    cout << "Majority Element = " << majorityElement(arr) << endl;
}
