#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int length = s.length();

        for(int i = 0; i < length; i++)
        {
            if(length > 10)
            {
                cout << s[0] << length - 2 << s[length - 1] << endl;
                break;
            }
            else
            {
                cout << s << endl;
                break;
            }
        }
    }
    return 0;
}