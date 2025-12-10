// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;

//     sort(S.begin(), S.end());

//     cout << S << '\n';
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int length;
    cin >> length;

    char ch;
    int letterCount[26] = {0};

    for(int i = 0; i < length; i++) {
        cin >> ch;
        letterCount[ch - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < letterCount[i]; j++) {
            putchar('a' + i);
        }
    }
    putchar('\n');

    return 0;
}

