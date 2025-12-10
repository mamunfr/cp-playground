#include <bits/stdc++.h>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    map<string, bool> pos;

    pos["Origem"] = (X == 0 && Y == 0);
    pos["Eixo X"] = (Y == 0 && X != 0);
    pos["Eixo Y"] = (X == 0 && Y != 0);
    pos["Q1"] = (X > 0 && Y > 0);
    pos["Q2"] = (X < 0 && Y > 0);
    pos["Q3"] = (X < 0 && Y < 0);
    pos["Q4"] = (X > 0 && Y < 0);

    for (auto it : pos) {
        if (it.second) {
            cout << it.first;
            break;
        }
    }

    return 0;
}
