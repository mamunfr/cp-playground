#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    bool result;

    if (S == '<') {
        if (A < B) {
            result = true;
        } else {
            result = false;
        }
    } else if (S == '>') {
        if (A > B) {
            result = true;
        } else {
            result = false;
        }
    } else if (S == '=') {
        if (A == B) {
            result = true;
        } else {
            result = false;
        }
    } else {
        result = false; 
    }

    if (result == true) {
        cout << "Right";
    } else {
        cout << "Wrong";
    }

    return 0;
}
