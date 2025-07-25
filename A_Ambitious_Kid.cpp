#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    int ans = 1e9;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        ans = min(ans, abs(v[i]));
    }
    cout << ans << endl;

}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    // cin >> lines;
    while (lines--) {
        fnc();
    }
    return 0;
}