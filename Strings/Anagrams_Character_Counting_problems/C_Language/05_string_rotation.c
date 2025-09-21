/* Check if One String is a Rotation of Another */

#include <stdio.h>
#include <string.h>

int isRotation(char* s1, char* s2) {
    if (strlen(s1)!=strlen(s2)) return 0;
    char temp[200];
    strcpy(temp,s1);
    strcat(temp,s1);
    return strstr(temp,s2)!=NULL;
}

int main() {
    char s1[]="waterbottle", s2[]="erbottlewat";
    printf("%s\n", isRotation(s1,s2) ? "Rotation" : "Not Rotation");
    return 0;
}
