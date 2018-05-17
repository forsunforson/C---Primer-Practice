#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto bscore = scores.begin();
    while(cin >> grade) {
        if(grade == 0) break;

        if(grade <= 100) {
            auto ind = grade/10;
            *(bscore+ind) += 1;
        }
    }

    for(bscore;bscore < scores.end(); ++bscore) {
        cout << *bscore << " ";
    }
    return 0;
}