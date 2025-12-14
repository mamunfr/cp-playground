#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n;
    cin >> c;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for(int j = 0; j < x; j++)
        {
            cout << c;
        }

        cout << endl;
    }
    return 0;
}