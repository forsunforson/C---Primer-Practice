#include <iostream>
using namespace std;

int main() {
    char c1[]="hello",c2[]="world";
    char c3[20];
    strcpy(c3,c1);
    strcat(c3," ");
    strcat(c3,c2);
    cout<<c3;
    return 0;
}