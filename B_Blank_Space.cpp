#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int temp = 0, ans = 0;
    for (int i=0;i<n;i++) {
        if (v[i] == 0) temp++;
        else {
            ans = max(ans, temp);
            temp = 0;
        }
    }
    ans = max(temp, ans);
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