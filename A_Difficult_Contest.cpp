#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    string s; cin >> s;
    int n = s.size();
    
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    
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