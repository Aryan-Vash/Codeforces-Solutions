#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    string s; cin >> s;

    int ans = 0, temp = 1;
    for (int i=0;i<n-1;i++) {
        if (s[i] == s[i+1]) temp++;
        else {
            ans = max(ans, temp + 1);
            temp = 1;
        }
    }
    // cout << ans << " " << temp << endl;
    cout << max(temp + 1, ans) << endl;
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