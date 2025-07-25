#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <pair<int,int>> v(n);
    for (int i=0;i<n;i++) cin >> v[i].first >> v[i].second;
    int minr = 1e9, minc = 1e9, maxr = 0, maxc = 0;
    for (int i=0;i<n;i++) {
        minr = min(minr, v[i].first);
        minc = min(minc, v[i].second);
        maxr = max(maxr, v[i].first);
        maxc = max(maxc, v[i].second);
    }
    int lenr = maxr - minr;
    int lenc = maxc - minc;
    int r = 0, c = 0;
    vector<vector<int> > dp(maxr, vector<int>(maxc, 0));
    for (int i=0;i<n;i++) {
        dp[v[i].first][v[i].second]++;
    }
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