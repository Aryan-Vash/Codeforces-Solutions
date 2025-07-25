#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool divisible_by_its_digits(ll num) {
    for (ll t = num; t; t /= 10) {
        int d = t % 10;
        if (d && num % d) return false;
    }
    return true;
}

ll nearest(ll n) {
    while (!divisible_by_its_digits(n)) ++n;
    return n;
}

void fnc() {
    ll n; cin >> n;
    cout << nearest(n) << endl;
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