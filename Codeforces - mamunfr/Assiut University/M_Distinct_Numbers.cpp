#include <bits/stdc++.h>
using namespace std;

int countDistinct(vector<int>& arr) {
    set<int> s;
    for(int num : arr) {
        s.insert(num);
    }
    return s.size();
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << countDistinct(arr) << "\n";

    return 0;
}
