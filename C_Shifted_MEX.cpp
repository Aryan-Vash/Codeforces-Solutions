#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int neg = 0, zero = 0;
    vector<int> nums(n); int mini = 1e9;
    for (int i=0;i<n;i++) {
        cin >> nums[i];
        mini = min(mini, nums[i]);
        if (nums[i] < 0) neg++;
        if (nums[i] == 0) zero++;
    }
    if (n == 1) {
        cout << "1\n";
        return;
    }

    sort(nums.begin(), nums.end());
    int ans = 0, cnt = 1;
    for (int i=0;i<n-1;i++) {
        if (nums[i+1] - nums[i] == 1) cnt++;
        else if (nums[i+1] == nums[i]) continue;
        else {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
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