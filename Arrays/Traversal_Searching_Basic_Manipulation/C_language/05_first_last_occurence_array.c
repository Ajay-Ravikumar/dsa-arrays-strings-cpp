#include <stdio.h>

int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n-1, ans = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == key) { ans = mid; high = mid-1; }
        else if (arr[mid] < key) low = mid+1;
        else high = mid-1;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n-1, ans = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == key) { ans = mid; low = mid+1; }
        else if (arr[mid] < key) low = mid+1;
        else high = mid-1;
    }
    return ans;
}

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("First = %d, Last = %d\n", firstOccurrence(arr, n, 2), lastOccurrence(arr, n, 2));
    return 0;
}
