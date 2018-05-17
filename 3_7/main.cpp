#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin>>str1;
    for(char &c: str1) {
        c = 'X';
    }
    cout<<str1;
    return 0;
}