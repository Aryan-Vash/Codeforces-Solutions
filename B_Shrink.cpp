#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector<int> v(n);

    v[0] = 1, v[n-1] = 2;
    int ref = n;
    for (int i=1;i<n-1;i++) {
        v[i] = ref;
        ref--;
    }

    for (auto it: v) cout << it << " ";
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