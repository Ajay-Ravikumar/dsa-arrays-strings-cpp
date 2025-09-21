/* Trapping Rain Water */

#include <stdio.h>

int trap(int height[], int n) {
    if (n==0) return 0;
    int left[n], right[n];
    left[0] = height[0];
    for (int i=1;i<n;i++) left[i] = (left[i-1] > height[i] ? left[i-1] : height[i]);
    right[n-1] = height[n-1];
    for (int i=n-2;i>=0;i--) right[i] = (right[i+1] > height[i] ? right[i+1] : height[i]);
    int ans = 0;
    for (int i=0;i<n;i++) {
        int water = (left[i]<right[i]?left[i]:right[i]) - height[i];
        if (water > 0) ans += water;
    }
    return ans;
}

int main() {
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Trapped Water = %d\n", trap(arr,n));
    return 0;
}
