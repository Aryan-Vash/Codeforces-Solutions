#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    int n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(), v.end());

    int el = v[0], cnt = 1, maxi = 0;
    for (int i=1;i<n;i++) {
        if (el == v[i]) cnt++;
        else {
            maxi = max(maxi, cnt);
            cnt = 1;
            el = v[i];
        }
    }
    maxi = max(maxi, cnt);

    int ans = 0;
    while (n - maxi) {
        ans++;
        ans += min(maxi, n - maxi);
        maxi = min(n, 2 * maxi);
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