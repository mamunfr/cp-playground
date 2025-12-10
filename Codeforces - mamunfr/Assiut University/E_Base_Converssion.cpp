#include <bits/stdc++.h>
using namespace std;

void printBinary(long long n) {
    if(n == 0) return;
    printBinary(n / 2);
    cout << n % 2;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if(n == 0)
            cout << 0;
        else
            printBinary(n);
        cout << "\n";
    }
}
