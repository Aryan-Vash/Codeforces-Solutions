#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k, m; cin >> n >> k >> m;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    if (n == 1) {
        if (v[0] <= m) cout << 1 << endl;
        else cout << 0 << endl;
        return;
    }

    vector<ll> arr;
    for (int i=0;i<n;i++) {
        if (v[i] <= m) arr.push_back(i);
    }

    ll cnt = 1, ans = 0;
    if (!arr.size()) {
        cout << 0 << endl;
        return;
    }

    for (int i=1;i<arr.size();i++) {
        if (arr[i] - arr[i-1] == 1) cnt++;
        else {
            if (cnt >= k) {
                // cout << "cnt: " << cnt << endl;
                ans += (cnt - k + 1) * (cnt - k + 2) / 2;
            }
            cnt = 1;
        }
    }
    if (cnt >= k) {
        // cout << "cnt: " << cnt << endl;
        ans += (cnt - k + 1) * (cnt - k + 2) / 2;
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