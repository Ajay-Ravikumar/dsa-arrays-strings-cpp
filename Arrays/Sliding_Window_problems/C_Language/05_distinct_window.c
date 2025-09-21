/* Count Distinct Elements in Every Window of Size k */

#include <stdio.h>
#include <string.h>

void countDistinct(int arr[], int n, int k) {
    int freq[1001]; memset(freq,0,sizeof(freq));
    int distinct=0;
    for (int i=0;i<k;i++) if (freq[arr[i]]++ == 0) distinct++;
    printf("%d ", distinct);
    for (int i=k;i<n;i++) {
        if (--freq[arr[i-k]] == 0) distinct--;
        if (freq[arr[i]]++ == 0) distinct++;
        printf("%d ", distinct);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,2,1,3,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    countDistinct(arr,n,4);
    return 0;
}
