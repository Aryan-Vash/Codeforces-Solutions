#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    int n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int mini = v[0];
    for (int i=0;i<n-1;i++) {
        mini = max(mini, v[i+1] - v[i]);
    }

    int ans = max(mini, 2 * (abs(k - v[n-1])));
    if (n == 1) cout << max(v[0], 2 * abs(k - v[0])) << endl;
    else cout << ans << endl;
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