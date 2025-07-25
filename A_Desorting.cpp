#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int mini = 1e9;
    for (int i=0;i<n-1;i++) {
        mini = min(mini, v[i+1] - v[i]);
    }

    if (mini < 0) cout << 0 << endl;
    else cout << mini / 2 + 1 << endl;
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