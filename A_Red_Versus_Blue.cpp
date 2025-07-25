#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n, r, c; cin >> n >> r >> c;

    string ans = "";
    while (r && c) {
        int a = r / (c + 1);
        int b = r % (c + 1);
        if (b) a++;
        for (int i=0;i<a;i++) ans += 'R';
        r -= a;
        ans += 'B';
        c--;
    }
    while (r--) ans += 'R';
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