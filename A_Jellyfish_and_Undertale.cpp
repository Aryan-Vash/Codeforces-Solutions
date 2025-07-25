#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b, n; cin >> a >> b >> n;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    ll ans = b;
    for (int i=0;i<n;i++) {
        ans += min(v[i], a - 1);
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