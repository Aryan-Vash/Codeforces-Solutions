#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool is_prime(int x) {
    if (x < 2)
        return false;
    for (int i=2;i<=sqrt(x);i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void fnc() {
    ll n; cin >> n;

    ll div1 = 1 + n;
    while (!is_prime(div1)) div1++;
    ll div2 = div1 + n;
    while (!is_prime(div2)) div2++;

    cout << div1 * div2 << endl;
    // cout << div1  <<  " " << div2 << endl;
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