#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    int n; char c; cin >> n >> c;
    string a; cin >> a;
    string s = a + a;

    if (c == 'g') {
        cout << 0 << endl;
        return;
    }
    queue<int> q;
    int index = 0, flag = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == c) q.push(i);
        if (!flag && s[i] == 'g') {
            flag = 1;
            index = i;
        }
    }
    int ans = 0;
    
    while (!q.empty()) {
        int ind = q.front();
        q.pop();

        if (index > ind) {
            ans = max(ans, index - ind);
            continue;
        }
        for (index = ind; index < 2 * n; index++) {
            if (s[index] == 'g') {
                if (index > ind) ans = max(ans, index - ind);
                break;
            }
        }
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