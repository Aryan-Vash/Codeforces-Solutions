#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll w, h, a, b; cin >> w >> h >> a >> b;
    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    
    ll mini_x = 1e9, mini_y = 1e9;
    mini_x = min(mini_x, abs(x1 + a - x2));
    mini_x = min(mini_x, abs(x1 - a - x2));
    mini_x = min(mini_x, abs(x1 - x2));
    // mini_x = min(mini_x, abs(x1 + 2 * a - x2));

    mini_y = min(mini_y, abs(y1 + b - y2));
    mini_y = min(mini_y, abs(y1 - b - y2));
    mini_y = min(mini_y, abs(y1 - y2));
    // mini_y = min(mini_y, abs(y1 + 2 * b - y2));

    // cout << mini_x << " " << " " << mini_y << endl;
    ll rem1 = mini_x % a;
    ll rem2 = mini_y % b;
    if (!rem1 && !rem2) cout << "Yes\n";
    else if (mini_x < a && mini_y < b && mini_x && mini_y) cout << "No\n";
    else if (mini_x && mini_y) cout << "Yes\n";
    else cout << "No\n";
    // cout << rem1 << " " << rem2 << endl;
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