#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    if (v[n-2] > v[n-1]) {
        cout << -1 << endl;
        return;
    }

    int flag1 = 0, flag2 = 0;
    for (int i=0;i<n-1;i++) {
        if (v[i+1] < v[i]) flag1 = 1;
        else flag2 = 1;
    }

    if (!flag2) {
        cout << -1 << endl;
        return;
    }
    if (!flag1) {
        cout << 0 << endl;
        return;
    }

    vector<vector<int> > ans;
    for (int i=0;i<n-2;i++) {
        if (i == n-3 && v[n-2] - v[n-1] > v[n-2]) {
            cout << -1 << endl;
            return;
        }
        vector<int> temp;
        temp.push_back(i + 1);
        temp.push_back(n - 1);
        temp.push_back(n);
        ans.push_back(temp);
    }

    cout << ans.size() << endl;
    for (auto it: ans) {
        for (auto el: it) {
            cout << el << " ";
        }
        cout << endl;
    }
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