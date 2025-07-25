#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, k; cin >> n >> k;
    string s;
    for (int i=0;i<n;i++) {
        s += '1';
    }
    if (n == 1) {
        if (k == 1) cout << "1" << endl;
        else cout << "0" << endl;
        return;
    }
    if (n == k) {
        for (int i=0;i<n;i++) cout << '1';
        cout << endl;
        return;
    }
    if (k == 0) {
        for (int i=0;i<n;i++) cout << '0';
        cout << endl;
        return;
    }
    s[n-1] = '0';
    int zeroes = n - k - 1, ones = k - 1;
    for (int i=1;i<=zeroes;i++) {
        s[i] = '0';
    }
    int ind = n-2;
    cout << s << endl;
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