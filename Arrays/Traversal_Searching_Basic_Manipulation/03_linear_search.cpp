#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == key) return i;
    return -1;
}

int main() {
    vector<int> arr = {7, 2, 9, 4};
    cout << "Index = " << linearSearch(arr, 9) << endl;
}
