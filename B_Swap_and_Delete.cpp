#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    string n; cin >> n;

    int cnt1 = 0, cnt0 = 0;
    for (char it: n) {
        if (it == '0') cnt0++;
        else cnt1++;
    }
    char flag;
    if (cnt1 == cnt0) {
        cout << 0 << endl;
        return;
    } 
    if (cnt1 > cnt0) flag = '1';
    else flag = '0';

    int diff = abs(cnt1 - cnt0);

    int ans = 0, temp = 0, ind = n.size() - 1;
    while (temp < diff) {
        if (flag == n[ind]) temp++;
        ind--;
        ans++;
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