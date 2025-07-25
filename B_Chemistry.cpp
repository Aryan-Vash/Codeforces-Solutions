#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    int size = s.size();

    vector<vector<char> > v(size + 1);

    map<char, int> mp;

    for (char ch: s) {
        if (mp.count(ch) != 0) mp[ch]++;
        else mp[ch] = 1;
    }

    int ans = 0;
    for (auto it: mp) {
        if (it.second % 2 == 1) ans++;
    }

    if (ans > k + 1) cout << "NO\n";
    else cout << "YES\n";
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