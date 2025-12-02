#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int ascii = c;

    if (ascii >= 65 && ascii <= 90)
    {
        char a=  ascii + 32;
        cout << a;
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        char b =  ascii - 32;
        cout << b;
    }
    return 0;
}