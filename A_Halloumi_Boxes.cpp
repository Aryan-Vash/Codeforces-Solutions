#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int ans = 0;
    for (int i = 0;i<n-1;i++) {
        if (v[i] > v[i+1]) ans++;
    }

    if (k == 1 && ans != 0) cout << "NO\n";
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