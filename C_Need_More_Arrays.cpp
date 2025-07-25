#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    vector<int> v2;
    for (int i=0;i<n;i++) cin >> v[i];
    int ans = 1, prev = 0, curr = 1;
    for (curr = 1; curr < n; curr++) {
        if (v[prev] + 1 < v[curr]) {
            ans++;
            prev = curr;
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
        // Call BFS or DFS as needed
        // Example:
        // bfs(1); // Start BFS from node 1
        // dfs(1); // Start DFS from node 1
    }
    return 0;
}