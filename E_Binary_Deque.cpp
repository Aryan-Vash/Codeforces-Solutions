#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, s, sum = 0; cin >> n >> s;
    vector <int> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
        sum += v[i];
    }

    if (sum < s) {
        cout << -1 << endl;
        return;
    }
    if (sum == s) {
        cout << 0 << endl;
        return;
    }

    vector<int> pre(sum - s + 1, 0), suf(sum - s + 1, 0);
    int ptr1 = 1;
    int ans = 1e9, size = sum - s;
    for (int i=0;i<n && ptr1<=size;i++) {
        if (v[i] == 1) {
            pre[ptr1] = i + 1;
            ptr1++;
        }
    }

    ptr1 = 1;
    for (int i=0;i<n && ptr1<=size;i++) {
        if (v[n - i - 1] == 1) {
            suf[ptr1] = i + 1;
            ptr1++;
        }
    }

    for (int i=0;i<=size;i++) {
        ans = min(ans, pre[i] + suf[size - i]);
    }
    cout << ans << endl;
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