#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, h; cin >> n >> l >> h;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];
    
    int s = min(l, h);
    int b = max(l, h);

    int cnt1 = 0, cnt2 = 0;
    for (int i=0;i<n;i++) {
        if (nums[i] <= s) cnt1++;
        if (nums[i] <= b) cnt2++;
    }

    int ans = 0;
    ans += min(cnt1, cnt2 - cnt1);
    if (cnt1 > cnt2 - cnt1) {
        ans += (cnt1 - (cnt2 - cnt1)) / 2;
    }

    cout << ans << "\n";
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