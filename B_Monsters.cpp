#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    vector<int> ans;
    vector<pair<int,int> > extra;
    for (int i=0;i<n;i++) {
        if (v[i] % 3 == 0) ans.push_back(i+1);
        else {
            pair<int,int> p = make_pair(v[i] % 3, i + 1);
            extra.push_back(p);
        }
    }
    sort(extra.begin(), extra.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) return a.first > b.first;  
        return a.second < b.second;                        
    });

    for (auto it: extra) ans.push_back(it.second);
    for (auto it: ans) cout << it << " ";
    cout << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    cin >> lines;
    while (lines--) {
        fnc();
    }
    return 0;
}