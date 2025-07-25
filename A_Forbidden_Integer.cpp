#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k, x; cin >> n >> k >> x;
    vector<int> ans;
    if (k == 1 && x == 1) {
        cout << "NO\n";
        return;
    }
    if (x != 1) {
        cout << "YES\n";
        for (int i=0;i<n;i++) ans.push_back(1);
    }
    else if (n % 2 == 0) {
        cout << "YES\n";
        for (int i=0;i<n;i+=2) ans.push_back(2);
    }
    else if (k > 2) {
        cout << "YES\n";
        n -= 3;
        ans.push_back(3);
        while (n != 0) {
            ans.push_back(2);
            n -= 2;
        }
    }
    else {
        cout << "NO\n";
        return;
    }
    cout << ans.size() << endl;
    for (auto it: ans) cout << it << " ";
    cout << endl;

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