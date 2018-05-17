#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[]={0,1,2,3,4};
    vector<int> v1(a,a+5);
    for(auto i:v1) {
        cout<<i<<" ";
    }
    cout<<endl;
    int b[5];
    for(int i=0;i<v1.size();++i) {
        b[i]=v1[i];
        cout<<b[i]<<" ";
    }

    return 0;
}