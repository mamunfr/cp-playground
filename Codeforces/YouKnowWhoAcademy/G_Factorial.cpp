#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        long long int f = 1;
        for(int i = 1; i <= n; i++)
        {
           f*= i;
        }

        cout << f << endl;
    }
    return 0;
}