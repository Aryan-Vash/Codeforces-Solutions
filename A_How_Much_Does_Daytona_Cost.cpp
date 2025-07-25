#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    for (int i=0;i<n;i++) {
        if (v[i] == k) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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