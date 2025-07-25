#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());
    int ans = 0, temp = 0;
    for (int i=0;i<n-1;i++) {
        if (v[i+1] - v[i] > k) {
            // cout << i << endl;
            // cout << ans << " " << temp << endl;
            ans = max(ans, temp + 1);
            temp = 0;
        }
        else temp++;
    }

    // for (auto it: v) cout << it << " ";

    cout << n - max(ans, temp + 1) << endl;
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