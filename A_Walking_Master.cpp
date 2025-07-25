#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b, c, d; cin >> a >> b >> c >> d;

    if (b > d) {
        cout << -1 << endl;
        return;
    }

    int ans = d - b;
    a += ans;
    if (a < c) {
        cout << -1 << endl;
        return;
    }
    ans += a - c;
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