#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int flag = v[0] % 2;
    int ans = 0;
    for (int i=1;i<n;i++) {
        if (v[i] % 2 == flag) {
            ans++;
        }
        else flag = v[i] % 2;
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