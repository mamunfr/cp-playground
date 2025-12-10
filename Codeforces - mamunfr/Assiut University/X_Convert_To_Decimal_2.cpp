#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        long long N;
        cin >> N;

        long long temp = N;
        int onesCount = 0;

        while (temp > 0) {
            if (temp % 2 == 1) {
                onesCount++;
            }
            temp = temp / 2;
        }

        long long result = 0;
        for (int i = 0; i < onesCount; i++) {
            result = result * 2 + 1;
        }

        cout << result << endl;
    }

    return 0;
}
