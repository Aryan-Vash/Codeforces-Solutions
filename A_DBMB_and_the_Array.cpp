#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, k; cin >> n >> s >> k;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];
    
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum += nums[i];
    }

    if (sum > s) {
        cout << "NO\n";
    }
    else if ((s - sum) % k != 0) {
        cout << "NO\n";
    }
    else cout << "YES\n";
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