#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll x, y, k; cin >> x >> y >> k;
    x--;
    ll total_sticks = y * k + k - 1;
    ll ans = total_sticks / x;
    if (total_sticks % x) ans++;
    cout << ans + k << endl;
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