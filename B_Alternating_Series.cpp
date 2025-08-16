#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i+=2) {
        v[i] = -1;
    }

    for (int i=1;i<n;i+=2) {
        v[i] = 3;
    }

    if (v[n-1] == 3) v[n-1] = 2;

    for (auto it: v) cout << it << " ";
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