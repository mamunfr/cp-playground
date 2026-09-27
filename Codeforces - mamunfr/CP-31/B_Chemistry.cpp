#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};
        for(char c : s) freq[c - 'a']++;

        int cnt = 0;
        for(int i = 0; i < 26; i++)
            if(freq[i] % 2 != 0) cnt++;

        int m = n - k;
        int target = m % 2;

        if(k >= abs(cnt - target))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}