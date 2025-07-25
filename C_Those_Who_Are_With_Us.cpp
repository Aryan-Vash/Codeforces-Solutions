#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, m; cin >> n >> m;
    vector<vector<ll> > v(n, vector<ll>(m));

    ll maxi = 0, cnt = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> v[i][j];
            maxi = max(maxi, v[i][j]);
        }
    }

    vector<ll> rows, cols, final_rows, final_cols;
    ll r = 0, c = 0;
    map<ll,ll> mp_rows, mp_cols;

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (maxi == v[i][j]) {
                cnt++;
                if (mp_rows.count(i)) mp_rows[i]++;
                else mp_rows[i] = 1;
                rows.push_back(i);
                if (mp_cols.count(j)) mp_cols[j]++;
                else mp_cols[j] = 1;
                cols.push_back(j);
            }
        }
    }

    ll ans = maxi;

    maxi = 0;
    for (auto it: mp_cols) {
        maxi = max(maxi, it.second);
    }

    for (auto it: mp_cols) {
        if (maxi == it.second) {
            final_cols.push_back(it.first);
        }
    }

    maxi = 0;
    for (auto it: mp_rows) {
        maxi = max(maxi, it.second);
    }

    for (auto it: mp_rows) {
        if (maxi == it.second) {
            final_rows.push_back(it.first);
        }
    }

    for (int x=0;x<final_rows.size();x++) {
        r = final_rows[x];
        for (int y=0;y<final_cols.size();y++) {
            c = final_cols[y];
            ll temp = 0;
            for (int i=0;i<n;i++) {
                for (int j=0;j<m;j++) {
                    if (ans == v[i][j] && (r == i || c == j)) temp++;
                }
            }
            if (temp == cnt) {
                cout << ans - 1 << endl;
                return;
            }
        }
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