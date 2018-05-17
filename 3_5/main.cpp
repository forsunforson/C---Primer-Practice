#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,tmp;
    while(cin>>str1) {
        if(str1=="0") break;
        tmp = tmp + " " + str1;
    }
    cout<<tmp;
    return 0;
}