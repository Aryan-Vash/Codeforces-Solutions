#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, j, k; cin >> n >> j >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int el = v[j-1];
    sort(v.begin(), v.end());

    if (k == 1) {
        if (v[n-1] != el) cout << "NO\n";
        else cout << "YES\n";
    }
    else cout << "YES\n";
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