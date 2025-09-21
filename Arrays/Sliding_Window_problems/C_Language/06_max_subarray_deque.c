/* Maximum of All Subarrays of Size k (Deque) */

#include <stdio.h>

#define MAXN 1000
int deque[MAXN], front=0, back=0;

void pushBack(int idx) { deque[back++] = idx; }
void popFront() { front++; }
void popBack() { back--; }
int frontVal() { return deque[front]; }
int backVal() { return deque[back-1]; }
int empty() { return front==back; }

void maxSubarrayK(int arr[], int n, int k) {
    front=back=0;
    for (int i=0;i<n;i++) {
        while (!empty() && arr[backVal()] <= arr[i]) popBack();
        pushBack(i);
        if (frontVal() <= i-k) popFront();
        if (i >= k-1) printf("%d ", arr[frontVal()]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxSubarrayK(arr,n,3);
    return 0;
}
