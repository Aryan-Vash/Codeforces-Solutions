#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <ll> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    if (n == 2) {
        cout << max(0LL, v[0] - v[1]) << endl;
        return;
    }

    ll ans = 0;
    for (int i=1;i<n;i+=2) {
        vector<int> flag;
        if (i > 0 && v[i-1] > v[i]) {
            ans += v[i-1] - v[i]; v[i-1] = v[i];
            flag.push_back(1);
        }
        if (i < n-1 && v[i] < v[i+1]) {
            ans += v[i+1] - v[i]; v[i+1] = v[i];
            flag.push_back(1);
        }
        if (i > 0 && i < n-1 && v[i+1] + v[i-1] > v[i]) {
            int val = v[i+1] + v[i-1] - v[i];
            ans += val;
            v[i+1] -= val;
        }
    }
    cout << ans << endl;
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