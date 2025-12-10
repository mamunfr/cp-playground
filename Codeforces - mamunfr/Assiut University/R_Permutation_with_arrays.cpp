#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000];
    int B[1000];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
            if (B[j] > B[j + 1]) {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    bool isPermutation = true;

    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            isPermutation = false;
            break;
        }
    }

    if (isPermutation) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
