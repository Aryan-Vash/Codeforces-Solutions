#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <ll> v(n);
    for (ll i=0;i<n;i++) cin >> v[i];

    map<ll, vector <ll> > mp;
    for (ll i=0;i<n;i++) mp[v[i]].push_back(i + 1);

    vector<ll> ans(n + 1);

    ll cnt = 1, flag = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        vector<ll> a = it->second;
        ll el = it->first;
        for (auto next: a) {
            if (flag) ans[next] = cnt;
            else ans[next] = -cnt;
            flag = 1 - flag;
            if (!flag) cnt++;
        }
    }

    ll res = 0;
    for (int i=1;i<=n;i++) res += v[i - 1] * 2 * abs(ans[0] - ans[i]);

    cout << res << endl;
    for (auto it: ans) cout << it << " ";
    cout << endl;
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