#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    map<int, int> s;
    int sum = 0;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        if (s.count(v[i]) == 0) s[v[i]] = 1;
        else s[v[i]] += 1;
    }

    if (s.size() > 2) {
        cout << "No\n";
        return;
    }
    if (s.size() == 1) {
        cout << "Yes\n";
        return;
    }
    vector<int> diff;
    for (auto it: s) diff.push_back(it.second);

    if (abs(diff[0] - diff[1]) > 1) cout << "No\n";
    else cout << "Yes\n";

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