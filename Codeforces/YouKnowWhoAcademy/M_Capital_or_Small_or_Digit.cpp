#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int ascii = c;

    if (ascii >= 65 && ascii <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}