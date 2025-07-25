#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    int n; cin >> n;
    string s; cin >> s;
    int low = 0, high = s.size() - 1;
    while (low <= high) {
        if (s[low] == s[high]) break;
        low++, high--;
    }
    // cout << low << " " << high << " ";
    cout << high - low + 1 << endl;
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