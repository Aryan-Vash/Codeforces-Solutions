#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, m; cin >> n >> m;
    vector <int> v(n), odd;
    vector <vector<int> > q(n, vector<int>(3));
    
    for (int i=0;i<n;i++) {
        cin >> v[i];
        if (v[i] % 2 == 1) odd.push_back(i);
    for (int i=0;i<m;i++) for (int j=0;j<3;j++) cin >> q[i][j];


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