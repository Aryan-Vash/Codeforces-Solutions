#include <bits/stdc++.h>
using namespace std;

void fnc() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> prefix(n), suffix(n);
    set<char> seen;

    for (int i = 0; i < n; ++i) {
        seen.insert(s[i]);
        prefix[i] = seen.size();
    }

    seen.clear();
    for (int i = n - 1; i >= 0; --i) {
        seen.insert(s[i]);
        suffix[i] = seen.size();
    }

    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ans = max(ans, prefix[i] + suffix[i + 1]);
    }

    cout << ans << '\n';
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        fnc();
    }
    return 0;
}
