#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i == j) continue;
            if (v[i] == v[j]) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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