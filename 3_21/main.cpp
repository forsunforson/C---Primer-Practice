#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    cout<<"Content of v1:";
    for(auto v1b = v1.begin(); v1b != v1.end(); ++v1b) {
        cout<<*v1b<<" ";
    }
    cout<<endl;

    cout<<"Content of v2:";
    for(auto v2b = v2.begin(); v2b != v2.end(); ++v2b) {
        cout<<*v2b<<" ";
    }
    cout<<endl;

    cout<<"Content of v3:";
    for(auto v3b = v3.begin(); v3b != v3.end(); ++v3b) {
        cout<<*v3b<<" ";
    }
    cout<<endl;

    cout<<"Content of v4:";
    for(auto v4b = v4.begin(); v4b != v4.end(); ++v4b) {
        cout<<*v4b<<" ";
    }
    cout<<endl;

    cout<<"Content of v5:";
    for(auto v5b = v5.begin(); v5b != v5.end(); ++v5b) {
        cout<<*v5b<<" ";
    }
    cout<<endl;

    cout<<"Content of v6:";
    for(auto v6b = v6.begin(); v6b != v6.end(); ++v6b) {
        cout<<*v6b<<" ";
    }
    cout<<endl;

    cout<<"Content of v7:";
    for(auto v7b = v7.begin(); v7b != v7.end(); ++v7b) {
        cout<<*v7b<<" ";
    }

    return 0;
}