/* Equilibrium Index */

#include <iostream>
#include <vector>
using namespace std;

int equilibriumIndex(const vector<int>& arr) {
    int total = 0, left = 0;
    for (int x : arr) total += x;
    for (int i = 0; i < arr.size(); i++) {
        total -= arr[i];
        if (left == total) return i;
        left += arr[i];
    }
    return -1;
}

int main() {
    vector<int> arr = {-7,1,5,2,-4,3,0};
    cout << "Equilibrium Index = " << equilibriumIndex(arr) << endl;
}
