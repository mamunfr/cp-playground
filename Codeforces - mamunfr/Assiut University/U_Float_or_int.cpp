#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;

    long long intPart;
    double decPart;
    bool checkInt;

    intPart = (long long)N;
    decPart = N - intPart;

    if (decPart == 0.0) {
        checkInt = true;
    } else {
        checkInt = false;
    }

    if (checkInt == true) {
        cout << "int " << intPart;
    } else {
        cout << "float " << intPart << " " << decPart;
    }

    return 0;
}
