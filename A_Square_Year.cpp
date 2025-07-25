#include <bits/stdc++.h>
using namespace std;

#define ll long long

pair<int, bool> isPerfectSquare(int num) {
    pair<int, bool> ans;
    ans.first = -1;
    ans.second = false;
    if (num < 0) return ans; // Negative numbers can't be perfect squares
    int root = static_cast<int>(sqrt(num));
    ans.first = root;
    ans.second = root * root == num;
    return ans;
}

void fnc() {
    string n; cin >> n;
    int ans = stoi(n);
    pair<int, bool> check = isPerfectSquare(ans);
    if (!check.second) {
        cout << -1 << endl;
        return;
    } 
    cout << 0 << " " << check.first << endl;
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