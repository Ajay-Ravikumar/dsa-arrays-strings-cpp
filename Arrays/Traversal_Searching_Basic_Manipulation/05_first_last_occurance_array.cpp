#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int>& arr, int key) {
    int low = 0, high = arr.size()-1, ans = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == key) { ans = mid; high = mid-1; }
        else if (arr[mid] < key) low = mid+1;
        else high = mid-1;
    }
    return ans;
}

int lastOccurrence(const vector<int>& arr, int key) {
    int low = 0, high = arr.size()-1, ans = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == key) { ans = mid; low = mid+1; }
        else if (arr[mid] < key) low = mid+1;
        else high = mid-1;
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,2,2,3,4};
    cout << "First = " << firstOccurrence(arr, 2)
         << ", Last = " << lastOccurrence(arr, 2) << endl;
}
