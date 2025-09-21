/* Trapping Rain Water */

#include <iostream>
#include <vector>
using namespace std;

int trap(const vector<int>& h) {
    int n = h.size();
    if (n==0) return 0;
    vector<int> left(n), right(n);
    left[0] = h[0];
    for (int i=1;i<n;i++) left[i] = max(left[i-1], h[i]);
    right[n-1] = h[n-1];
    for (int i=n-2;i>=0;i--) right[i] = max(right[i+1], h[i]);
    int ans = 0;
    for (int i=0;i<n;i++) ans += min(left[i], right[i]) - h[i];
    return ans;
}

int main() {
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped Water = " << trap(arr) << endl;
}
