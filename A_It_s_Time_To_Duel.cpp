#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i=0;i<n;i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int total = 0, flag = 0;
        for (int i=0;i<v.size()-1;i++) {
            if (v[i] == 0 && v[i+1] == 0) {
                cout << "YES\n";
                flag = 1;
                break;
            }
            else if (v[i]) total++; 
        }
        if (flag) continue;
        if (v[v.size()-1]) total++;
        if (total > n - 1) cout << "YES\n";
        else cout << "NO\n";
    }
}