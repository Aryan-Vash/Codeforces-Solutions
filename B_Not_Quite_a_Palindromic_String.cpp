#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    // cout << "size: " << n << endl;
    int ans = 0;
    int cnt0 = 0, cnt1 = 0;
    if (k > n / 2) {
        cout << "NO\n";
        return;
    }

    for (int i=0;i<n;i++) {
        if (s[i] == '0') cnt0++;
        else cnt1++;
    }

    int mid = n / 2;
    int bad = mid - k;

    if ((cnt1 - bad) % 2 != 0 || (cnt0 - bad) % 2 != 0) {
        cout << "NO\n";
        return;
    }
    if (cnt0 < bad || cnt1 < bad) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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