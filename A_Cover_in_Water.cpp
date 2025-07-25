#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <char> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    int cnt = 0, temp = 0, ans = 0;
    for (auto it: v) {
        if (it == '#') {
            temp = max(cnt, temp);
            cnt = 0;
        }
        else {
            cnt++, ans++;
        }
    }
    temp = max(cnt, temp);

    if (temp >= 3) cout << 2 << endl;
    else cout << ans << endl;
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