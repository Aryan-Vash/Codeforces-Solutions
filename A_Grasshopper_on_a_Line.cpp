#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    if (n % k != 0) {
        cout << 1 << "\n" << n << "\n";
        return;
    }
    cout << 2 << "\n" << n - 1 << " " << 1 << endl;
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