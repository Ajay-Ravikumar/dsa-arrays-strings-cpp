/* Longest Substring with Equal Number of 0s and 1s */

#include <stdio.h>
#include <string.h>

int longestEqual01(int arr[], int n) {
    int map[20001]; // offset for -n..+n
    for (int i=0;i<20001;i++) map[i]=-2;
    int prefix=0, maxLen=0, offset=10000;
    map[offset]= -1;
    for (int i=0;i<n;i++) {
        prefix += (arr[i]==1)?1:-1;
        if (map[prefix+offset] >= -1) {
            int len = i - map[prefix+offset];
            if (len > maxLen) maxLen = len;
        } else {
            map[prefix+offset]=i;
        }
    }
    return maxLen;
}

int main() {
    int arr[]={0,1,0,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Longest Equal 0-1 = %d\n", longestEqual01(arr,n));
    return 0;
}
