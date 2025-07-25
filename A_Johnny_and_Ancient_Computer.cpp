#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b; cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    if (a % 2 && b % 2) {
        cout << -1 << endl;
        return;
    }

    if (a > b) {
        if (a % b) {
            cout << -1 << endl;
            return;
        }

        ll ans = 0;
        while (a != b) {
            if (a>>3 >= b && ~(a>>3 & 1)) {
                ans++;
                b *= 8;
            }
            else if (a>>2 >= b && ~(a>>2 & 1)) {
                ans++;
                b *= 4;
            }
            else if (a>>1 >= b && ~(a>>1 & 1)) {
                ans++;
                b *= 2;
            }
            else {
                cout << -1 << endl;
                return;
            }
            // cout << a << " " << b << " " << ans << endl;
        }
        cout << ans << endl;
        // cout << 1 << endl;
        return;
    }
    if (b % a) {
        cout << -1 << endl;
        return;
    }

    ll ans = 0;
    while (a != b) {
        if (a<<3 <= b) {
            ans++;
            a *= 8;
        }
        else if (a<<2 <= b) {
            ans++;
            a *= 4;
        }
        else if (a<<1 <= b) {
            ans++;
            a *= 2;
        }
        else {
            cout << -1 << endl;
            return;
        }
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