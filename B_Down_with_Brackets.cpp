#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 2) {
        cout << "NO\n";
        return;
    }
    vector<int> v;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == '(') cnt1++;
        else if (s[i] == ')') cnt2++;
        if (i == n-1) break;
        if (cnt1 - 1 < cnt2) {
            cout << "YES\n";
            return;
        }
    }
    // for (int i=n/2;i<n;i++) {
    //     if (s[i] == '(') cnt3++;
    //     else if (s[i] == ')') cnt4++;
    // }
    // if (cnt1 - 1 < cnt2 && cnt3 > cnt4 - 1) cout << "YES\n";
    cout << "NO\n";
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