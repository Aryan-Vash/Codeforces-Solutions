#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    vector<int> ind(1001, -1);
    for (int i=0;i<n;i++) cin >> v[i];
    for (int i=0;i<n;i++) ind[v[i]] = i + 1;

    int ans = -1;
    for (int i=1000;i>0;i--) {
        if (ind[i] == -1) continue;
        for (int j=1000;j>0;j--) {
            if (ind[j] == -1) continue;
            if (gcd(i, j) == 1 || gcd(j, i) == 1) {
                ans = max(ans, ind[i] + ind[j]);
            }
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