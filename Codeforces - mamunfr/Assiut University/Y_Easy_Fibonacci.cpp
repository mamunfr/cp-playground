#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a = 0;
    long long b = 1;
    long long c;

    if (N >= 1) {
        cout << a << " ";
    }
    if (N >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= N; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
