#include <bits/stdc++.h>
using namespace std;

#define ll long long

class DisjointSet {
    vector <int> rank, parent, size;

public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        parent.resize(n+1);
        for (int i=0;i<n+1;i++) parent[i] = i;
    }

    int findUPar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);
        if (pu == pv) return;
        if (rank[pu] > rank[pv])
            parent[pv] = pu;

        else if (rank[pu] < rank[pv])
            parent[pu] = pv;

        else {
            parent[pu] = pv;
            rank[pv]++;
        }
    }

    void unionBySize(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);
        if (pu == pv) return;
        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

vector<vector<int>> adj;
vector<bool> visited;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        // Process node v
        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}

void dfs(int v) {
    visited[v] = true;
    // Process node v
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u);
        }
    }
}

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    // Read adjacency list or matrix 
    if (n == 2) {
        cout << "NO\n";
        return;
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