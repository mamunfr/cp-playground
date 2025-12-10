#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    vector<char> chars;
    for (auto &p : freq) {
        chars.push_back(p.first);
    }

    sort(chars.begin(), chars.end(), [&](char a, char b) {
        if (freq[a] != freq[b])
            return freq[a] > freq[b];
        return a < b;
    });

    cout << "Output: [";
    for (int i = 0; i < chars.size(); i++) {
        cout << "'" << chars[i] << "'";
        if (i != chars.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
