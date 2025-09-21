/* Check if a String is a Palindrome */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char* s) {
    int l=0, r=strlen(s)-1;
    while (l<r) {
        while (l<r && !isalnum(s[l])) l++;
        while (l<r && !isalnum(s[r])) r--;
        if (tolower(s[l]) != tolower(s[r])) return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    char s[]="A man, a plan, a canal: Panama";
    printf("%s\n", isPalindrome(s) ? "Palindrome" : "Not Palindrome");
    return 0;
}
