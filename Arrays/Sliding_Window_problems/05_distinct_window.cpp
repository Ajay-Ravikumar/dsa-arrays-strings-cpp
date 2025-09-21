/* Count Distinct Elements in Every Window of Size k */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void countDistinct(const vector<int>& arr, int k) {
    unordered_map<int,int> freq;
    for (int i=0;i<k;i++) freq[arr[i]]++;
    cout << freq.size() << " ";
    for (int i=k;i<arr.size();i++) {
        if (--freq[arr[i-k]] == 0) freq.erase(arr[i-k]);
        freq[arr[i]]++;
        cout << freq.size() << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1,2,1,3,4,2,3};
    countDistinct(arr,4);
}
