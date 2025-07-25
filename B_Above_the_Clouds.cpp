#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    string s; cin >> s;

    map<char, int> mp;
    mp[s[0]] = 1;
    mp[s[n-1]] = 1;
    for (int i=1;i<n-1;i++) {
        if (mp.count(s[i])) {
            cout << "Yes\n";
            return;
        }
        mp[s[i]] = 1;
    }
    cout << "No\n";
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