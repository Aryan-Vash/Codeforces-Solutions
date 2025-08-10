#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    if (n % 2) cout << "YES\n";
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