#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int maxi = -1e9;
    for (int i=0;i<n;i++) {
        int j;
        cin >> j;
        maxi = max(maxi, j);
    }
    cout << maxi * n << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}