#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, x, y; cin >> a >> x >> y;
    ll pos1 = abs(x - a);
    ll pos2 = abs(y - a);

    for (int i=1;i<=100;i++) {
        if (abs(i-x) < pos1 && abs(i-y) < pos2) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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