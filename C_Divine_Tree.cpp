#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, m; cin >> n >> m;
    ll d = 5, sum = n * (n + 1) / 2;
    
    if (sum < m || m < n) {
        cout << -1 << endl;
        return;
    }

    d = n;
    for (int i=1;i<=n;i++) {
        if (m < sum - d * i) d--;
        else break;
    } 
    cout << d << endl;
    int prev = 1, next = 2;
    while (prev < n) {
        if (prev == d) prev++;
        else if (next == d) next++;
        if (prev < n && next < n) cout << prev << " " << next << endl;
        prev++, next++;
    }

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