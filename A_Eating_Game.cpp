#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];
    
    int maxi = 0;
    int cnt = 0;
    for (int i=0;i<n;i++) {
        if (nums[i] == maxi) cnt++;
        else if (nums[i] > maxi) {
            maxi = nums[i];
            cnt = 1;
        }
    }

    cout << cnt << "\n";
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