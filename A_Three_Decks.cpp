#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b, c; cin >> a >> b >> c;
    int ans = (a + b + c);
    if (ans % 3 == 0 && ans / 3 >= b) cout << "YES\n";
    else cout << "NO\n";
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