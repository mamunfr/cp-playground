#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<long long>& arr, int left, int right) {
    if(left >= right) return true;
    if(arr[left] != arr[right]) return false;
    return isPalindrome(arr, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    if(isPalindrome(arr, 0, n - 1))
        cout << "YES\n";
    else
        cout << "NO\n";
}
