#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <ll> v(n);
    ll mini = 1e9, maxi = 0;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        maxi = max(v[i], maxi);
        mini = min(v[i], mini);
    }

    ll ans = 0;
    if (mini > k) {
        ans += maxi - k;
    }
    else if (maxi > k) {
        if (maxi - k < k - mini) {
            ans += maxi - k;
        }
        else ans += k - mini;
        ans += maxi - mini;
    }
    else ans += k - mini;

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