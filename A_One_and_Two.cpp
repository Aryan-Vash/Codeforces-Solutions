#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void fnc() {
    ll n; cin >> n;
    vector <ll> v(n);
    int cnt = 0;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        if (v[i] == 2) cnt++;
    }

    if (cnt % 2 == 1) {
        cout << -1 << endl;
        return;
    }

    if (cnt == 0) {
        cout << 1 << endl;
        return;
    }

    int ans = 0;
    for (int i=0;i<n;i++) {
        if (v[i] == 2) {
            ans++;
            if (ans == cnt / 2) {
                cout << i + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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