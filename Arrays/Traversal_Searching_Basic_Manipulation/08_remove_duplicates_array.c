/* Remove Duplicates from a Sorted Array (in-place) */

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;
    int j = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
}

int main() {
    vector<int> arr = {1,1,2,2,3,4,4};
    int len = removeDuplicates(arr);
    for (int i=0; i<len; i++) cout << arr[i] << " ";
}
