/* Find Missing Number in Range (1…n) */

#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = (n+1) * (n+2) / 2; 
    for (int i = 0; i < n; i++) total -= arr[i];
    return total;
}

int main() {
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Missing Number = %d\n", findMissing(arr, n));
    return 0;
}
