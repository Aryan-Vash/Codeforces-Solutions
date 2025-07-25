// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// void fnc() {
//     ll n; cin >> n;
//     vector <ll> a(n), b(n);
//     ll maxi = 0;
//     for (int i=0;i<n;i++) {
//         cin >> a[i];
//         maxi = max(maxi, a[i]);
//     }
//     for (int i=0;i<n;i++) {
//         cin >> b[i];
//         maxi = max(maxi, b[i]);
//     }
//     vector <vector<int> > pos(maxi + 1), pos2(maxi + 1);
//     vector <ll> arr1(maxi + 1, 0), arr2(maxi + 1, 0);

//     for (int i=0;i<n;i++) pos[a[i]].push_back(i);
    
//     ll ans = 0, cnt = 0;
//     for (int i=1;i<=maxi;i++) {
//         for (int j=1;j<pos[i].size();j++) {
//             if (pos[i][j] - pos[i][j-1] == 1) cnt++;
//             else {
//                 arr1[i] = max(arr1[i], cnt + 1);
//                 cnt = 0;
//             }
//         }
//         if (pos[i].size()) arr1[i] = max(arr1[i], cnt + 1);
//         cnt = 0;
//     }

//     for (int i=0;i<n;i++) pos2[b[i]].push_back(i);

//     for (int i=1;i<=maxi;i++) {
//         for (int j=1;j<pos2[i].size();j++) {
//             if (pos2[i][j] - pos2[i][j-1] == 1) cnt++;
//             else {
//                 arr2[i] = max(arr2[i], cnt + 1);
//                 cnt = 0;
//             }
//         }
//         if (pos2[i].size()) arr2[i] = max(arr2[i], cnt + 1);
//         cnt = 0;
//     }
    
//     for (int i=0;i<=maxi;i++) ans = max(ans, arr1[i] + arr2[i]);
//     cout << ans << endl;

// }

// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int lines;
//     lines = 1;
//     cin >> lines;
//     while (lines--) {
//         fnc();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void fnc() {
    ll n; cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];

    ll maxi_a = *max_element(a.begin(),a.end());
    ll maxi_b = *max_element(b.begin(),b.end());

    // vector<int> c;
    // for(int i = 0; i < n ; i++) c.push_back(a[i]);
    // for(int i = 0; i < n ; i++) c.push_back(b[i]); 
    // c array   
    // for(int i = 0; i < c.size() ; i++){
    //     cout << c[i] << " ";
    // }    
    ll maxi_c = max(maxi_a,maxi_b);
    vector<int> v1(maxi_c+1,0);
    vector<int> v2(maxi_c+1,0);

    int prev = -1;
    int curr_count = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == prev) {
            curr_count++;
        } else {
            if (prev != -1) {
                v1[prev] = max(v1[prev], curr_count);
            }
            prev = a[i];
            curr_count = 1;
        }
    }

    v1[prev] = max(v1[prev], curr_count);

    prev = -1; curr_count = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == prev) {
            curr_count++;
        } else {
            if (prev != -1) {
                v2[prev] = max(v2[prev], curr_count);
            }
            prev = b[i];
            curr_count = 1;
        }
    }
    v2[prev] = max(v2[prev], curr_count);

    int ans = 0;
    for (int i = 1; i <= maxi_c; i++) {
        ans = max(ans, v1[i] + v2[i]);
    }

    cout << ans << '\n';

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

