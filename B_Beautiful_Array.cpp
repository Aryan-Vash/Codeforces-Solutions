#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k, b, s; cin >> n >> k >> b >> s;

    if (s / k < b) {
        cout << -1 << endl;
        return;
    }

    vector<ll> ans;
    ll initial_sum = s;
    ans.push_back(k * b);
    s -= k * b;
    for (int i=1;i<n;i++) {
        if (s - k + 1 >= 0) {
            ans.push_back(k - 1);
            s -= k - 1;
        }
        else if (s) {
            ans.push_back(s);
            s = 0;
        }
        else ans.push_back(0);
    }

    ll beauty = 0, sum = 0;
    for (int i=0;i<ans.size();i++) {
        sum += ans[i];
        beauty += ans[i] / k;
    }
    // cout << endl;
    // for (auto it: ans) cout << it << " ";
    // cout << endl;

    // cout << sum << " " << beauty << endl;
    if (sum != initial_sum || beauty != b) {
        if (initial_sum - sum < k) ans[0] += initial_sum - sum;
        else {
            cout << -1 << endl;
            return;
        }
    }
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