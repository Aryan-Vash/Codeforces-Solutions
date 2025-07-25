#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = min(a, c), y = min(b, d);
    if (x >= y) cout << "Gellyfish\n";
    else cout << "Flower\n";
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    cin >> lines;
    while (lines--) fnc();
    return 0;
}