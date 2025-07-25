#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // for (auto it: v) cout << it << " ";
    // cout << endl;
    int low = 0, high = n - 1;
    ll sum = v[low], ans = 0;
    while (low <= high) {
        if (sum > k) {
            ans++;
            sum = v[++low];
        }
        else {
            sum += v[low];
            high--;
        }
    }

    cout << ans << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    lines = 1;
    // cin >> lines;
    while (lines--) {
        fnc();
    }
    return 0;
}