#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll a, b, c; cin >> a >> b >> c;

    if (a > b) cout << "First\n";
    else if (b > a) cout << "Second\n";
    else if (c % 2 == 0) cout << "Second\n";
    else cout << "First\n";
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