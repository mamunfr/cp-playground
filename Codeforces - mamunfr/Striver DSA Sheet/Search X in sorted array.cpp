#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int t;
    cout << "Enter target value: ";
    cin >> t;

    int left = 0;
    int right = n - 1;
    int mid;
    int ans = -1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (v[mid] == t) {
            ans = mid;
            break;
        } 
        else if (v[mid] < t) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    if (ans != -1) {
        cout << "Target found at index: " << ans << endl;
    } 
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}
