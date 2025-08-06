#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    string s; cin >> s;
    
    int ones = 0, ans = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == '1') ones++;
    }

    for (int i=0;i<n;i++) {
        if (s[i] == '1') ans += ones - 1;
        if (s[i] == '0') ans += ones + 1;
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