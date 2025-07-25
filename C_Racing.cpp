#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    vector<vector <int> > obs(n, vector<int>(2,0));
    for (int i=0;i<n;i++) {
        int a, b;
        cin >> obs[i][0] >> obs[i][1];
    }
    vector<vector <int> > h(n, vector<int>(2,0));
    int mini = 0, maxi = 0;
    for (int i=0;i<n;i++) {
        if (v[i] != -1) {
            mini += v[i], maxi += v[i];
            if (mini > obs[i][1] || maxi < obs[i][0]) {
                cout << -1 << endl;
                return;
            }
            h[i][0] = mini, h[i][1] = maxi;
            continue;
        }
        maxi += 1;
        if (mini > obs[i][1] || maxi < obs[i][0]) {
            cout << -1 << endl;
            return;
        }
        maxi = min(maxi, obs[i][1]);
        mini = max(mini, obs[i][0]);
        h[i][0] = mini, h[i][1] = maxi;
    }
    for (int i=0;i<n;i++) {
        if (v[i] == -1) {
            if (i == 0) v[i] = h[i][1];
            else v[i] = h[i][1] - h[i-1][1];
        }
        cout << v[i] << " ";
    }
    cout << endl;
    // for (int i=0;i<n;i++) {
    //     cout << v[i] << endl;
    // }
    // cout << "n";
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    cin >> lines;
    while (lines--) 
    fnc();
    return 0;
}