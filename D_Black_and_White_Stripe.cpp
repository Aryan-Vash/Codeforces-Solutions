#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    if (k == 1) {
        for (int i=0;i<n;i++) {
            if (s[i] == 'B') {
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }

    if (n == k) {
        int cnt = 0;
        for (int i=0;i<n;i++) {
            if (s[i] == 'W') cnt++;
        }
        cout << cnt << endl;
        return;
    }

    int low = 0, high = 0;
    int cnt = 0, ans = 1e9;

    while (high < n) {
        if (s[high] == 'W') cnt++;
        if (high - low + 1 == k) {
            ans = min(ans, cnt);
            if (s[low] == 'W') cnt--;
            low++; 
        }
        high++;
    }
    cout << ans << endl;
    return;
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