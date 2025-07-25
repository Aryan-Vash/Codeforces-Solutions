#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    vector <vector<char> > v(11, vector<char>(11));
    for (int i=1;i<11;i++) {
        for (int j=1;j<11;j++) cin >> v[i][j];
    }
    map<int,int> mp;
    mp[0] = 5;
    mp[1] = 4;
    mp[2] = 3;
    mp[3] = 2;
    mp[4] = 1;

    int ans = 0;
    for (int i=0;i<11;i++) {
        for (int j=0;j<11;j++) {
            if (v[i][j] != 'X') continue;
            // cout << i << " " << j << " " << 10 - i << " " << 10 - j << endl;
            int temp;
            if (i > 5 && j > 5) temp = mp[max(i - 6, j - 6)];
            else if (i > 5 && j <= 5) temp = mp[max(i - 6, 5 - j)];
            else if (i <= 5 && j > 5) temp = mp[max(5 - i, j - 6)];
            else temp = mp[max(5 - i, 5 - j)];
            // cout << temp << endl;
            ans += temp;
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