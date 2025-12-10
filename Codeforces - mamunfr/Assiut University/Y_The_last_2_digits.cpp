#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long x = a % 100;
    x = (x * (b % 100)) % 100;
    x = (x * (c % 100)) % 100;
    x = (x * (d % 100)) % 100;

    if (x < 10) cout << 0;
    cout << x;

    return 0;
}
