#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    ll diff = v[0] - v[1];
    for (int i=0;i<n-1;i++) {
        if (v[i] - v[i+1] != diff) {
            cout << "NO\n";
            return;
        }
    }

    ll check = (2 * v[0] - v[1]) / (n + 1);
    if (check <= 0) {
        cout << "NO\n";
        return;
    }

    if (v[1] - v[0] + check <= 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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