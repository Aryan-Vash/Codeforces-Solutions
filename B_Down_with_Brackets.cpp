#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 2) {
        cout << "NO\n";
        return;
    }
    vector<int> v;
    int cnt1 = 0, cnt2 = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == '(') cnt1++;
        else if (s[i] == ')') cnt2++;
        if (i == n-1) break;
        if (cnt1 - 1 < cnt2) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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