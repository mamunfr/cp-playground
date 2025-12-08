#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, res;
    char op,eq;
    cin >> a >> op >> b >> eq >> c;
    if(op == '+')
    {
        res = a + b;
    }
    else if(op == '-')
    {
        res = a - b;
    }
    else if(op == '*')
    {
        res = a*b;
    }

    if(res == c)
    {
        cout << "Yes";
    }
    else
    {
        cout << res;
    }
    return 0;
}