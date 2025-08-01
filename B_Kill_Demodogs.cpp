// Problem - 841B

#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

ll MOD = 1000000007;

void fnc() {
    ll n; cin >> n;
    
    cout << (((((4 * (n * n) % MOD) + (3 * n) % MOD - 1) * n) % MOD) * 337) % MOD << endl;
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