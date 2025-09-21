/* Equilibrium Index */

#include <stdio.h>

int equilibriumIndex(int arr[], int n) {
    int total = 0, left = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    for (int i = 0; i < n; i++) {
        total -= arr[i];
        if (left == total) return i;
        left += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {-7,1,5,2,-4,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Equilibrium Index = %d\n", equilibriumIndex(arr,n));
    return 0;
}
