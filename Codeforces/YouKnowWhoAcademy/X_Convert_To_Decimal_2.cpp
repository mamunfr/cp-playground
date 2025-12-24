#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int ones = 0;
        while(n > 0)
        {
            if(n%2 == 1)
            {
                ones++;
            }

            n/=2;
        }

        int res = pow(2,ones) - 1;
        cout << res << endl;

    }
    return 0;
}