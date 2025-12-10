#include <bits/stdc++.h>
using namespace std;

void shiftRight(vector<int>& arr, int X) {
    int N = arr.size();
    X = X % N; 
    if(X == 0) return;

    vector<int> temp(arr.end() - X, arr.end());
    for(int i = N - 1; i >= X; i--) {
        arr[i] = arr[i - X];
    }
    for(int i = 0; i < X; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    shiftRight(arr, X);

    for(int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}
