#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    string a, b; cin >> a >> b;
    int n = a.size();
    int m = b.size();

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    ll ans = 1e9;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            ll cnt = 0;
            for (int k=0;k<min(n - i, m - j);k++) {
                if (a[i + k] == b[j + k]) cnt++;
                else break;
            }
            if (cnt) ans = min(ans, n + m - 2 * cnt);
        }
    }
    if (ans == 1e9) cout << n + m << endl;
    else cout << ans << endl;

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