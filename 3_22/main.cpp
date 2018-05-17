#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string text = "It is rainning outside. \n I feel a little hungry.";
    for(auto it = text.begin(); it !=text.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
        cout << *it;
    }
    return 0;
}