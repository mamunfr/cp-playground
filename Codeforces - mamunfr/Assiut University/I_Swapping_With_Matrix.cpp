#include <bits/stdc++.h>
using namespace std;

void swapRow(vector<vector<int>>& mat, int row1, int row2, int size) {
    for(int col = 0; col < size; col++) {
        swap(mat[row1][col], mat[row2][col]);
    }
}

void swapColumn(vector<vector<int>>& mat, int col1, int col2, int size) {
    for(int row = 0; row < size; row++) {
        swap(mat[row][col1], mat[row][col2]);
    }
}

int main() {
    int N, rowX, rowY;
    cin >> N >> rowX >> rowY;

    rowX--;
    rowY--;

    vector<vector<int>> matrix(N, vector<int>(N));

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> matrix[i][j];

    swapRow(matrix, rowX, rowY, N);
    swapColumn(matrix, rowX, rowY, N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
