#include <bits/stdc++.h>
using namespace std;

#define ll long long

int func(int l, int r, vector <int>& v) {
    if (l > r) return INT_MAX;
    if ((v[l] + v[r]) % 2 == 0) return 0;
    return 1 + min(func(l+1, r, v), func(l, r-1, v));
}

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = 0;
    int left = 0, right = n - 1;
    cout << func(0, n-1, v) << endl;
    // Read adjacency list or matrix here
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