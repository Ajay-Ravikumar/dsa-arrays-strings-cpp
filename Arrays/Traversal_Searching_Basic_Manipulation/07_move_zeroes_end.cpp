/* Move All Zeros to the End */

#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {0,1,0,3,12};
    moveZeros(arr);
    for (int x : arr) cout << x << " ";
}
