#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int ans = 1;

    ans = (ans * ( a % 100)) % 100;
    ans = (ans * ( b % 100)) % 100;
    ans = (ans * ( c % 100)) % 100;
    ans = (ans * ( d % 100)) % 100;

    if(ans < 10)
    {
        cout << "0" << ans << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}