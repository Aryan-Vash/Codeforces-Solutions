#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, x; cin >> n >> x;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int flag = 0, left = 0, right = 0;
    for (int i=0;i<n;i++) {
        if (v[i] == 1) {
            left = i;
            break;
        }
    }
    for (int i=n-1;i>=0;i--) {
        if (v[i] == 1) {
            right = i;
            break;
        }
    }

    if (right - left + 1 > x) cout << "NO\n";
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