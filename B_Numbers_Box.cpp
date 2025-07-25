#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, m; cin >> n >> m;
    vector <vector<ll> > v(n, vector<ll>(m));
    ll low = 1e9, neg = 0, sum = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> v[i][j];
            low = min(low, abs(v[i][j]));
            if (v[i][j] < 0) neg++;
            sum += abs(v[i][j]);
        }
    }
    if (neg % 2 == 0) cout << sum << endl;
    else cout << sum - 2 * low << endl;

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