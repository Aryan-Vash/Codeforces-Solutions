#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    ll initial_k = k;

    ll ans1 = 0;
    if (initial_k >= a) {
        ll num1 = (initial_k - a) / x + 1;
        ans1 += num1;
        ll temp_k = initial_k - num1 * x;
        if (temp_k >= b) {
            ll num2 = (temp_k - b) / y + 1;
            ans1 += num2;
        }
    }

    ll ans2 = 0;
    if (initial_k >= b) {
        ll num1 = (initial_k - b) / y + 1;
        ans2 += num1;
        ll temp_k = initial_k - num1 * y;
        if (temp_k >= a) {
            ll num2 = (temp_k - a) / x + 1;
            ans2 += num2;
        }
    }

    cout << max(ans1, ans2) << endl;
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