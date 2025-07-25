#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, a, b; cin >> n >> a >> b;

    if (n == a && n == b) cout << "Yes\n";
    else if (n == a || n == b) cout << "No\n";
    else if (n - (a + b) <= 1) cout << "No\n";
    else cout << "Yes\n";
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