#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    string s; cin >> s;

    ll cnt = 0, ans = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == '(') cnt++;
        else cnt--;
        if (cnt < 0) {
            ans++, cnt++;
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