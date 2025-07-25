#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <ll> v(n);
    ll maxi = 0;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }

    if (k == 4) {
        int cnt = 0, ans = 1e9;
        for (auto it: v) {
            if (it % 4 == 0) {
                ans = 0;
                break;
            }
            if (it % 4 == 3) ans = min(ans, 1);
            if (it % 2 == 0) cnt++;
            if (cnt == 2) break;
        }
        ans = min(ans, 2 - cnt);
        cout << ans << endl;
        return;
    }

    vector<ll> dp(maxi + 1, -1);
    ll ans = 1e9;

    for (int i=0;i<n;i++) {
        if (dp[v[i]] != -1) {
            // cout << dp[v[i]] << " ";
            continue;
        }
        dp[v[i]] = k - (v[i] % k);
        if (dp[v[i]] == k) dp[v[i]] = 0;
        // cout << dp[v[i]] << " ";
    }  
    // cout << "\n";

    for (auto it: dp) {
        if (it != -1) ans = min(ans, it);
    }
    cout << ans << endl;

}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    cin >> lines;
    while (lines--) {
        fnc();
    }
    return 0;
}