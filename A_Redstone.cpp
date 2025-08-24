#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());
    int el = v[0], cnt = 1, flag = 0;
    for (int i=1;i<n;i++) {
        if (el == v[i]) cnt++;
        else {
            cnt = 1;
            el = v[i];
        }
        if (cnt == 2) {
            flag = 1;
            break;
        }
    }
    if (!flag) {
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
    }
    return 0;
}