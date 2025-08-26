#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, a, b; cin >> n >> a >> b;
    
    if (n % 2) {
        if (a % 2 && b % 2) cout << "YES\n";
        else if (a % 2 == 0) {
            if (b > a && b % 2) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (b % 2 == 0) {
            cout << "NO\n";
        }
    }
    else {
        if (a % 2 == 0 && b % 2 == 0) cout << "YES\n";
        else if (a % 2 == 1) {
            if (b > a && b % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (b % 2 == 1) cout << "NO\n";
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