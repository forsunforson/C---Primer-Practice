#include <iostream>
#include <vector>
using namespace std;

bool compareList(int *p1b,int *p1e,int *p2b,int *p2e) {
    if(p1e-p1b!=p2e-p2b) return false;
    for(p1b,p2b;p1b<p1e;p1b++,p2b++) {
        if(*p1b!=*p2b) return false;
    }
    return true;
}

bool comparevector(vector<int> a,vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(auto a1=a.begin(),b1=b.begin();a1<a.end();a1++,b1++) {
        if(*a1!=*b1) return false;
    }
    return true;
}

int main() {
    int a[4]={0,1,2,3};
    int b[4]={0,1,2,3};
    int c[4]={0,1,3,2};
    cout<<compareList(begin(a),end(a),begin(b),end(b))<<endl;
    cout<<compareList(begin(a),end(a),begin(c),end(c))<<endl;
    vector<int> v1,v2,v3;
    for(int i=0;i<4;++i) {
        v1.push_back(a[i]);
        v2.push_back(a[i]);
        v3.push_back(c[i]);
    }
    cout<<comparevector(v1,v2)<<endl;
    cout<<comparevector(v1,v3)<<endl;
    return 0;
}