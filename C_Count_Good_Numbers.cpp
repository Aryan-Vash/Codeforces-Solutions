#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll count(ll x, ll l, ll r) {
    return r / x - (l - 1) / x;
}

void fnc() {
    ll l, r; cin >> l >> r;

    ll total = r - l + 1;

    ll two = count(2, l, r);
    ll thr = count(3, l, r);
    ll five = count(5, l, r);
    ll seven = count(7, l, r);

    ll six = count(6, l, r);
    ll ten = count(10, l, r);
    ll four = count(14, l, r);
    ll fif = count(15, l, r);
    ll twe = count(21, l, r);
    ll thirty_five = count(35, l, r);

    ll thir = count(30, l, r);
    ll fourty = count(42, l, r);
    ll seventy = count(70, l, r);
    ll one_zero_five = count(105, l, r);

    ll two_ten = count(210, l, r);

    cout << total - (two + thr + five + seven) + (six + 
    ten + four + fif + twe + thirty_five) - (thir +
    fourty + seventy + one_zero_five) + two_ten << '\n';
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        fnc();
    }
    return 0;
}
