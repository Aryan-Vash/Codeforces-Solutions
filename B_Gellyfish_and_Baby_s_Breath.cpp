#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD = 998244353;
ll power[100001];

void fnc() {
    ll n; cin >> n;
    vector <int> p(n), q(n);
    vector <ll> r(n); 
    for (ll i=0;i<n;i++) cin >> p[i];
    for (ll i=0;i<n;i++) cin >> q[i];
    ll maxi1 = 0, maxi2 = 0;
    for (int i=0;i<n;i++) {
        if (i == 0) {
            r[i] = (power[p[0]] + power[q[0]]) % MOD;
            continue;
        }
        if (p[maxi1] < p[i]) maxi1 = i;
        if (q[maxi2] < q[i]) maxi2 = i;
        pair<ll,ll> a1 = make_pair(p[maxi1], q[i - maxi1]);
        pair<ll,ll> a2 = make_pair(q[maxi2], p[i - maxi2]);
        pair<ll,ll> ans = max(a1, a2);
        r[i] = (power[ans.first] + power[ans.second]) % MOD;
    }
    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int lines;
    cin >> lines;
    power[0] = 1;
    for (int i=1;i<=100000;i++) {
        power[i] = (power[i-1] * 2) % MOD;
    }
    while (lines--) fnc();
    return 0;
}