#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int star = 1; star <= 2 * i - 1; star++) 
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
