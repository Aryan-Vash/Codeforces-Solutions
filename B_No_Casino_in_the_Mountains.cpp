#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int ans = 0, cnt = 0;
    for (int i=0;i<n;i++) {
        if (cnt == k) {
            cnt = 0;
            ans++;
            // cout << "i: " << i - 1 << endl;
            continue;
        }
        if (v[i] == 1) {
            cnt = 0;
            continue;
        }
        else cnt++;
    }

    if (cnt == k) ans++;
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