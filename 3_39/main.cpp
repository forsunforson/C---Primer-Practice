#include <iostream>
using namespace std;

int main() {
    string str1="hello world",str2="Hello World";
    if(str1==str2) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    char c1[]="hello world",c2[]="Hello World";
    cout<<strcmp(c1,c2)<<endl;

    return 0;
}