#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

void fnc() {
    ll a, b, k; cin >> a >> b >> k;
    if (k >= a && k >= b) {
        cout << 1 << endl;
        return;
    }
    ll g = gcd(a,b);
    if (g == 1) {
        cout << 2 << endl;
        return;
    }
    ll dx = a / g;
    ll dy = b / g;
  
    if(dx <= k && dy <= k) cout << 1  << endl;
    else cout << 2 << endl;
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