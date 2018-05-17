#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    for(int i=0;i<10;i++) {
        v1.push_back(i);
    }

    for(auto it = v1.begin(); it != v1.end(); ++it) {
        *it *= 2;
        cout << *it << " ";
    }
    return 0;
}