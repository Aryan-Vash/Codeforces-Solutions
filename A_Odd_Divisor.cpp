#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    
    ll i = 1, cnt = 0;
    while (cnt < 2 && i <= n) {
        if ((n & i) == i) cnt++;
        i <<= 1;
    }
    if (cnt == 2) cout << "YES\n";
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