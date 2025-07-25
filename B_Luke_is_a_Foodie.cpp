#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, x; cin >> n >> x;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int mini = 1e9, maxi = 0;
    ll ans = 0;
    for (int i=0;i<n;i++) {
        mini = min(mini, v[i]);
        maxi = max(maxi, v[i]);

        int diff = (maxi - mini) / 2;
        int rem = (maxi - mini) % 2;
        if (rem) diff++;
        if (diff > x) {
            ans++;
            maxi = mini = v[i];
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