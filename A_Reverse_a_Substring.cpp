#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    string s; cin >> s;

    for (int i=1;i<n;i++) {
        if (s[i-1] > s[i]) {
            cout << "YES\n";
            cout << i << " " << i+1 << endl;
            return;
        }
    }
    cout << "NO\n";
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    // cin >> lines;
    while (lines--) {
        fnc();
    }
    return 0;
}