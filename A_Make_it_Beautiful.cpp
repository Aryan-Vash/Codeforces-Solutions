#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    if (n == 1) {
        cout << "YES\n";
        cout << v[0] << endl;
        return;
    }

    if (v[0] == v[n-1]) {
        cout << "NO\n";
        return;
    }

    reverse(v.begin(), v.end());
    cout << "YES\n";
    cout << v[0] << " " << v[n-1] << " ";
    for (int i=1;i<n-1;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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