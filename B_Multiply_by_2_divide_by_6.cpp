#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, ans = 0; cin >> n;
    
    while (n != 1) {
        if (n % 3) {
            cout << -1 << endl;
            return;
        }
        if (n % 2) n *= 2;
        else n /= 6;
        ans++;
    }
    cout << ans << endl;
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