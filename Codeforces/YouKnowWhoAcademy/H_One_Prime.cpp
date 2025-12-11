#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n <= 1)
    {
        cout << "N0" << endl;
    }
    else
    {
        bool isPrime = true;
        for(int i = 2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}