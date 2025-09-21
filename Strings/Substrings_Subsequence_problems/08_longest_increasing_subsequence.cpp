/* Longest Increasing Subsequence */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LIS(vector<int>& arr) {
    vector<int> sub;
    for (int x:arr) {
        auto it=lower_bound(sub.begin(),sub.end(),x);
        if (it==sub.end()) sub.push_back(x);
        else *it=x;
    }
    return sub.size();
}

int main() {
    vector<int> arr={10,9,2,5,3,7,101,18};
    cout<<"LIS length = "<<LIS(arr)<<endl;
}
