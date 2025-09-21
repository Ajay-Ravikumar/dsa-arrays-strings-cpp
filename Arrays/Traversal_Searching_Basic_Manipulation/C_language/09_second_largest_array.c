/* Find the Second Largest (or Kth Largest) Element */

#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int arr[] = {10, 5, 20, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Second Largest = %d\n", secondLargest(arr, n));
    return 0;
}
