#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    // vector<pair<int,int>> pockets(4);
    vector <vector<int> > v(n, vector<int>(4, 0));
    for (int i=0;i<n;i++) {
        for (int j=0;j<4;j++) cin >> v[i][j];
    }
    int ans = 0;
    while(n--) {
        if (v[n][0] == 1 && v[n][1] == 1) {
            if (k - v[n][2] == k - v[n][3]) {
                ans++;
                continue;
            }
        }
        else if (v[n][0] == 1 && v[n][1] == -1) {
            if (k - v[n][2] == v[n][3]) {
                // cout << v[2] << " " << v[3] << endl;
                ans++;
                continue;
            }
        }
        else if (v[n][0] == -1 && v[n][1] == 1) {
            if (v[n][2] == k - v[n][3]) {
                ans++;
                continue;
            }
        }
        else {
            if (v[n][2] == v[n][3]) {
                ans++;
                continue;
            }
        }
    } 

    cout << ans << endl;
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