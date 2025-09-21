/* Check if a String is a Palindrome */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int l=0, r=s.size()-1;
    while (l<r) {
        while (l<r && !isalnum(s[l])) l++;
        while (l<r && !isalnum(s[r])) r--;
        if (tolower(s[l]) != tolower(s[r])) return false;
        l++; r--;
    }
    return true;
}

int main() {
    string s="A man, a plan, a canal: Panama";
    cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome") << endl;
}
