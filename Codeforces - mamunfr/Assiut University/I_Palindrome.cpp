#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N;
    int reversed = 0;

    while (N > 0) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N = N / 10;
    }

    cout << reversed << endl;

    if (reversed == original) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
