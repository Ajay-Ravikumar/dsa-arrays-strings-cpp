/* Generate All Subsequences */

#include <iostream>
#include <string>
using namespace std;

void subsequences(string s,int idx,string curr) {
    if (idx==s.size()) { cout<<curr<<endl; return; }
    subsequences(s,idx+1,curr);
    subsequences(s,idx+1,curr+s[idx]);
}

int main() {
    string s="abc";
    subsequences(s,0,"");
}
