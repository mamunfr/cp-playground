#include <bits/stdc++.h>
using namespace std;

int main() {
    double X;
    cin >> X;

    bool inFirst = false;
    bool inSecond = false;
    bool inThird = false;
    bool inFourth = false;

    if (X >= 0 && X <= 25) {
        inFirst = true;
    } 
    if (X > 25 && X <= 50) {
        inSecond = true;
    } 
    if (X > 50 && X <= 75) {
        inThird = true;
    } 
    if (X > 75 && X <= 100) {
        inFourth = true;
    }

    if (inFirst == true) {
        cout << "Interval [0,25]";
    } else if (inSecond == true) {
        cout << "Interval (25,50]";
    } else if (inThird == true) {
        cout << "Interval (50,75]";
    } else if (inFourth == true) {
        cout << "Interval (75,100]";
    } else {
        cout << "Out of Intervals";
    }

    return 0;
}
