#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    if (n == 1) {
        cout << -1 << endl;
        return;
    }

    if (n == 2) {
        if (v[0] == v[1]) cout << 2 << " " << 1 << endl;
        else cout << -1 << endl;
        return;
    }

    if (v[0] != v[1] || v[n-1] != v[n-2]) {
        cout << -1 << endl;
        return;
    }

    for (int i=1;i<n-1;i++) {
        if (v[i] != v[i-1] && v[i] != v[i+1]) {
            cout << -1 << endl;
            return;
        }
    }

    map<int, vector<int> > mp;
    for (int i=0;i<n;i++) {
        mp[v[i]].push_back(i+1);
    }

    for (auto it: mp) {
        vector<int> a = it.second;
        cout << a[a.size() - 1] << " ";
        for (int i=0;i<a.size()-1;i++) cout << a[i] << " ";
    }
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