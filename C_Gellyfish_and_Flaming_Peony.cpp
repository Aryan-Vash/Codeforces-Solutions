#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b) return gcd(a - b, b);
    return gcd(a, b - a);
}

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    int flag = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i == j) continue;
            if (gcd(v[i], v[j]) == 1) {
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }
    if (flag) {
        int ans = n;
        for (int i=0;i<n;i++) if (v[i] == 1) ans--;
        cout << ans << endl;
        return;
    }

    

    cout << 0 << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    cin >> lines;
    while (lines--) fnc();
    return 0;
}