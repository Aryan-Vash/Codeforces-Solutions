#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define siz 1000000

void fnc() {
    ll n, k; cin >> n >> k;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    if (n == 1) {
        if (v[0] == 1) v[0] += k;
        cout << v[0] << endl;
        return;
    }

    if (k % 2) {
        for (int i=0;i<n;i++) {
            if (v[i] % 2) v[i] += k;
        }
        for (int i=0;i<n;i++) cout << v[i] << " ";
        cout << endl;
        return;
    }
    else {
        for (int i=0;i<n;i++) v[i] += (v[i] % (k + 1)) * k;
    }

    for (int i=0;i<n;i++) cout << v[i] << " ";
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