#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C;
    char S, eq;
    cin >> A >> S >> B >> eq >> C;

    long long ans;

    if (S == '+') ans = A + B;
    else if (S == '-') ans = A - B;
    else ans = A * B;

    if (ans == C) cout << "Yes";
    else cout << ans;

    return 0;
}
