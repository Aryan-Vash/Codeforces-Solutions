#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    vector<int> ans;
    for (int i=0;i<n-1;i++) {
        if (v[i] > v[i+1]) {
            ans.push_back(v[i]);
            ans.push_back(1);
        }
        else ans.push_back(v[i]);
    }
    ans.push_back(v[n-1]);
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