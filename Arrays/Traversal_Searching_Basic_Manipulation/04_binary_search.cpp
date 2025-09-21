#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int key) {
    int low = 0, high = arr.size()-1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    cout << "Index = " << binarySearch(arr, 5) << endl;
}
