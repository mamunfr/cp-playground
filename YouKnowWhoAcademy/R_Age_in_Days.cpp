#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int year = n / 365;
    n = n % 365;

    int month = n / 30;
    n = n % 30;

    int days = n;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}