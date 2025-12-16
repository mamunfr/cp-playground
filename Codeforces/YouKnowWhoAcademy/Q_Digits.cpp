// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         if(n == 0)
//         {
//             cout << 0;
//         }
//         else
//         {
//             while(n > 0)
//             {
//                 cout << n%10;
//                 n/= 10;
//                 if(n > 0)
//                 {
//                     cout << " ";
//                 }
//             }

//             cout << endl;
//         }
        
//     }
//     return 0;
// }

//It had error, now taking input as string.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for(int i = s.size()-1; i >= 0; i--)
        {
            cout << s[i] << " ";
        }

        cout << endl;
    }
    return 0;
}