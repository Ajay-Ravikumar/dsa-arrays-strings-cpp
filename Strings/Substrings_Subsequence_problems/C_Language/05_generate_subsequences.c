/* generate_subsequences.c */

#include <stdio.h>
#include <string.h>

void subsequences(char* s,int idx,char* curr) {
    if (s[idx]=='\0') { printf("%s\n",curr); return; }
    int len=strlen(curr);
    subsequences(s,idx+1,curr); // exclude
    curr[len]=s[idx]; curr[len+1]='\0';
    subsequences(s,idx+1,curr); // include
    curr[len]='\0';
}

int main() {
    char s[]="abc", curr[10]="";
    subsequences(s,0,curr);
    return 0;
}
