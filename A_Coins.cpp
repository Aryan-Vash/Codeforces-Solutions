#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    
    if (n % 2 == 0) {
        cout << "YES\n";
        return;
    }
    if (k % 2 == 1 && k <= n) {
        cout << "YES\n";
    }
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