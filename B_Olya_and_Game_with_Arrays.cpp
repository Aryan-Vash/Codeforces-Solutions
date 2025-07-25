#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <vector<ll> > v;

    for (int i=0;i<n;i++) {
        int m; cin >> m;
        vector<ll> w(m);
        for (int j=0;j<m;j++) cin >> w[j];
        v.push_back(w);
    }

    for (int i=0;i<n;i++) sort(v[i].begin(), v[i].end());

    ll mini = 1e9;
    for (int i=0;i<n;i++) mini = min(mini, v[i][0]);

    ll ans = mini, cnt = 1;
    vector<ll> result;
    for (int i=0;i<n;i++) {
        if (v[i].size() > 1) result.push_back(v[i][1]);
        else {
            ans += v[i][0];
            cnt++;
        }
    }

    sort(result.begin(), result.end());
    for (int i=n-1;i>=cnt;i--) ans += result[i];

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