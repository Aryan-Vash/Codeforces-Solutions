#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int l = 0, r = -1, ind = 0;
    int l1 = -1, r1 = -1;
    int z = 0, flag = 0;

    while (ind < n-1) {
        for (ind;ind<n-1;ind++) {
            if (s[ind] == '0') z++;

            if (s[ind] < s[ind+1]) {
                r = ind;
                break;
            }
            // else {
            //     r = ind;
            //     break;
            // }
        }

        if (l >= 0 && l < n && r >= 0 && r < n && (l == r || s[l] == s[r])) {
            l = r + 1;
            ind = l; r = -1; z = 0;
            continue;
        }
        flag++;
        
        // cout << l << " " << r << "\n";
        if (ind == n-1) {
            if (l == 0 && s[n-1] == s[0]) {
                cout << "Bob\n";
                return;
            }
            r = n - 1;
        } 
        
        if (l < 0 || r < 0 || l >= n || r >= n) break;
        if (flag == 1) l1 = l, r1 = r;
        string a = s.substr(0, l);
        string b = s.substr(l, r - l + 1);
        string c = s.substr(r + 1, n - r - 1);
        sort(b.begin(), b.end());
        s = a + b + c;
        int m = r - l + 1;
        l += m - z + 1; r = -1; ind = l; z = 0;
    }

    if (flag % 2 == 0) cout << "Bob\n";
    else {
        cout << "Alice\n";
        cout << r1 - l1 + 1 << "\n";
        cout << l1 + 1 << " " << r1 + 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}