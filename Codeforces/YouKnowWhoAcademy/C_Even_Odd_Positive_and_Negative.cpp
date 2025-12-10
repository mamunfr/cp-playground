#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count_pos = 0, count_neg = 0, count_odd = 0, count_even = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            count_pos++;
        }
        else if (x < 0)
        {
            count_neg++;
        }

        if (x % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }

    cout << "Even: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
    cout << "Positive: " << count_pos << endl;
    cout << "Negative: " << count_neg << endl;
    
    return 0;
}