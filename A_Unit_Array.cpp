#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    int cnt2 = 0, cnt1 = 0;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        if (v[i] == 1) cnt1++;
        else cnt2++;
    }
    
    if (cnt1 >= cnt2) {
        if (cnt2 % 2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }
    else {
        int ans = abs(cnt2 - cnt1) / 2 + (cnt2 - cnt1) % 2;
        cnt2 -= ans, cnt1 += ans;
        if (cnt2 % 2 == 0) cout << ans << endl;
        else cout << ans + 1 << endl;
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
        // Call BFS or DFS as needed
        // Example:
        // bfs(1); // Start BFS from node 1
        // dfs(1); // Start DFS from node 1
    }
    return 0;
}