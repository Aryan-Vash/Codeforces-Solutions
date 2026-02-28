#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];
    

    int ans = 0;
    for (int i=0;i<n-1;i++) {
        if (nums[i] > nums[i+1]) {
            ans++;
            break;
        }
    }

    if (ans == 0) cout << n << "\n";
    else cout << 1 << "\n";
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