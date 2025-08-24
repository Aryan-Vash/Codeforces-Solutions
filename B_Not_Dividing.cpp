#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    
    for (int i=0;i<n-1;i++) {
        if (v[i] == 1) {
            v[i] = 2;
            if (i > 0 && v[i-1] == 2) v[i]++;
        }
        if (v[i+1] % v[i] == 0) v[i+1]++;
    }
    for (auto it: v) cout << it << " ";
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
        // Call BFS or DFS as needed
        // Example:
        // bfs(1); // Start BFS from node 1
        // dfs(1); // Start DFS from node 1
    }
    return 0;
}