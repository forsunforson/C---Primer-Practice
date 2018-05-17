#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str1;
    cin>>str1;
    string tmp;
    for(auto c: str1) {
        if(!ispunct(c)) {
            tmp += c;
        }
    }
    cout<<tmp<<endl;
    return 0;
}