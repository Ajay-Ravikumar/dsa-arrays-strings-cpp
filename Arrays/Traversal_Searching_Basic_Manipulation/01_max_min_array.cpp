#include <iostream>
#include <vector>
using namespace std;

pair<int,int> findMaxMin(const vector<int>& arr) {
    int mx = arr[0], mn = arr[0];
    for (int x : arr) {
        mx = max(mx, x);
        mn = min(mn, x);
    }
    return {mx, mn};
}

int main() {
    vector<int> arr = {3, 5, 1, 9, 2};
    auto [mx, mn] = findMaxMin(arr);
    cout << "Max = " << mx << ", Min = " << mn << endl;
    return 0;
}
