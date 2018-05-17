#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5};
    int *pb=begin(a);
    int *pe=end(a);
    while(pb!=pe) {
        *pb=0;
        pb=pb+1;
    }
    cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4];
    return 0;
}