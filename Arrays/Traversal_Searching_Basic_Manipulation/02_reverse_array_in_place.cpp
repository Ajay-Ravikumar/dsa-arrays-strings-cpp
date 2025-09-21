#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int i = 0, j = arr.size()-1;
    while (i < j) swap(arr[i++], arr[j--]);
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    reverseArray(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
