/* Count Subarrays with Sum = k */

#include <stdio.h>
#include <stdlib.h>

// Hashing using chaining
typedef struct Node {
    int key, count;
    struct Node* next;
} Node;

#define SIZE 1009

Node* table[SIZE];

int hash(int x) { return (x % SIZE + SIZE) % SIZE; }

void insert(int key) {
    int h = hash(key);
    Node* cur = table[h];
    while (cur) {
        if (cur->key == key) { cur->count++; return; }
        cur = cur->next;
    }
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key; node->count = 1; node->next = table[h]; table[h] = node;
}

int get(int key) {
    int h = hash(key);
    Node* cur = table[h];
    while (cur) {
        if (cur->key == key) return cur->count;
        cur = cur->next;
    }
    return 0;
}

int countSubarrays(int arr[], int n, int k) {
    for (int i=0;i<SIZE;i++) table[i] = NULL;
    int sum = 0, count = 0;
    insert(0); // prefix sum 0
    for (int i=0;i<n;i++) {
        sum += arr[i];
        count += get(sum-k);
        insert(sum);
    }
    return count;
}

int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Count = %d\n", countSubarrays(arr,n,3));
    return 0;
}
