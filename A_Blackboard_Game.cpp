#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    
    if (n % 4 == 0) cout << "Bob\n";
    else cout << "Alice\n";
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