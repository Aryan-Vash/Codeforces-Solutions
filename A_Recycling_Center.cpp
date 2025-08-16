#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, c; cin >> n >> c;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ind = 0;
    // cout << c << " " << v[ind] << endl;
    for (ind=0;ind<n;ind++) {
        if (c < v[ind]) break;
    }
    
    ind--;
    if (ind == -1) {
        cout << n << endl;
        return;
    }

    int cnt = 1, ans = 0;
    for (int i=ind;i>=0;i--) {
        int val = v[i] * cnt;
        if (val > c) {
            ans++;
            continue;
        }
        cnt *= 2;
    }

    cout << ans + n - ind - 1 << endl;
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