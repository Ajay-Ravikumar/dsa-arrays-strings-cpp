/* Majority Element (Boyer-Moore Voting) */

#include <stdio.h>

int majorityElement(int arr[], int n) {
    int cand = arr[0], count = 1;
    for (int i=1;i<n;i++) {
        if (arr[i] == cand) count++;
        else count--;
        if (count == 0) { cand = arr[i]; count = 1; }
    }
    // verify
    count = 0;
    for (int i=0;i<n;i++) if (arr[i] == cand) count++;
    return (count > n/2) ? cand : -1;
}

int main() {
    int arr[] = {2,2,1,1,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Majority Element = %d\n", majorityElement(arr,n));
    return 0;
}
