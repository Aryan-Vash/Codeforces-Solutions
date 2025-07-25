#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b; cin >> a >> b;

    if (b > a) {
        cout << 1 << endl;
        return;
    }

    if (a == b) {
        cout << 2 << endl;
        return;
    }

    ll ans = 1e9;
    ll range = a / b;
    ll i = 0;
    if (b == 1) i = 1;
    for (;i<=range;i++) {
        int div = b + i;
        int sum = a;
        ll cnt = i;
        while (sum) {
            sum /= div;
            cnt++;
        }
        ans = min(ans, cnt);
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