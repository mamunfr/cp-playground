#include <bits/stdc++.h>
using namespace std;

string checkPrime(long long n) {
    if(n <= 1) return "NO";
    if(n == 2) return "YES";
    if(n % 2 == 0) return "NO";
    for(long long i = 3; i*i <= n; i += 2) {
        if(n % i == 0) return "NO";
    }
    return "YES";
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long N;
        cin >> N;
        cout << checkPrime(N) << "\n";
    }
    return 0;
}
