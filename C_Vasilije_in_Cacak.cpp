#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k, x; cin >> n >> k >> x;
    
    ll sum = 0, cnt = 0;
    cnt = k * (k + 1) / 2;

    if (cnt > x) {
        cout << "NO\n";
        return;
    }

    sum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
    
    if (sum < x) cout << "NO\n";
    else cout << "YES\n";

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