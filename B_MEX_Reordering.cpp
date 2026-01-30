#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];
    
    sort(nums.begin(), nums.end());
    int cnt = 0, flag = 0;

    for (int i=0;i<n;i++) {
        if (nums[i] == 1) flag = 1;
        if (nums[i] == 0) cnt++;
    }
    if (cnt == 0) cout << "NO\n";
    else if ((cnt > 1) && flag != 1) cout << "NO\n";
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