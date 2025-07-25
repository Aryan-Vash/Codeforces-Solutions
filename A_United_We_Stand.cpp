#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());

    int el = v[0];

    vector<int> b, c;
    b.push_back(v[0]);
    for (int i=1;i<n;i++) {
        if (el == v[i]) b.push_back(el);
        else c.push_back(v[i]);
    }

    if (!b.size() || !c.size()) {
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << endl;
    for (auto it: b) cout << it << " ";
    cout << endl;
    for (auto it: c) cout << it << " ";
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