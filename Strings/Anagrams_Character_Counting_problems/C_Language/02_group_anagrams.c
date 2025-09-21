/* Group Anagrams Together */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortString(char* str) {
    int n=strlen(str);
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (str[i]>str[j]) {
                char t=str[i]; str[i]=str[j]; str[j]=t;
            }
        }
    }
}

int main() {
    char arr[5][20]={"eat","tea","tan","ate","nat"};
    int n=5;
    char keys[5][20];
    for (int i=0;i<n;i++) {
        strcpy(keys[i],arr[i]);
        sortString(keys[i]);
    }
    printf("Grouped Anagrams:\n");
    for (int i=0;i<n;i++) {
        printf("%s -> key=%s\n", arr[i], keys[i]);
    }
    return 0;
}
