/* Check if One String is a Rotation of Another */

#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1,string s2) {
    if (s1.size()!=s2.size()) return false;
    return (s1+s1).find(s2)!=string::npos;
}

int main() {
    string s1="waterbottle", s2="erbottlewat";
    cout << (isRotation(s1,s2) ? "Rotation" : "Not Rotation") << endl;
}
