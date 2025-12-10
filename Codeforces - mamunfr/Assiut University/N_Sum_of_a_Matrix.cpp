#include <bits/stdc++.h>
using namespace std;

void sumMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B, int r = 0, int c = 0) {
    int R = A.size();
    int C = A[0].size();
    if(r == R) return;
    if(c == C) {
        cout << "\n";
        sumMatrix(A, B, r + 1, 0);
        return;
    }
    cout << A[r][c] + B[r][c] << " ";
    sumMatrix(A, B, r, c + 1);
}

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<int>> A(R, vector<int>(C));
    vector<vector<int>> B(R, vector<int>(C));

    for(auto &row : A) for(auto &x : row) cin >> x;
    for(auto &row : B) for(auto &x : row) cin >> x;

    sumMatrix(A, B);
}
