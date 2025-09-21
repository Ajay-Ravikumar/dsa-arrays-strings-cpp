/* Rotate an Array by k Steps (Right Rotation) */

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr, int l, int r) {
    while (l < r) swap(arr[l++], arr[r--]);
}

void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k %= n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(arr, k);
    for (int x : arr) cout << x << " ";
}
