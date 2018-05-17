#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ip;
    vector<int> v1;
    cout << "输入一组整数，输入0结束：";
    while(cin >> ip) {
        if(ip == 0) break;
        v1.push_back(ip);
    }

    auto v1b = v1.begin();
    auto v1e = v1.end() - 1;
    for(v1b; v1b < v1e; ++v1b) {
        cout << *v1b + *(v1b + 1) << " ";
    }

    v1b = v1.begin();
    for(;v1b <= v1e; v1b++, v1e--) {
        cout << *v1b + *v1e << " ";
    }
    return 0;
}