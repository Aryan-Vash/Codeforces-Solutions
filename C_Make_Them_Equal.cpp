#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void fnc() {
    ll n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    int flag = 0;
    for (int i=0;i<n;i++) {
        if (s[i] != c) {
            flag = 1;
            break;
        }
    }

    if (!flag) {
        cout << 0 << endl;
        return;
    }

    for (int i=n;i>1;i--) {
        flag = 0;
        for (int j=i-1;j<n;j+=i) {
            if (s[j] != c) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << 1 << endl << i << endl;
            return;
        }
    }

    cout << 2 << endl << n - 1 << " " << n << endl;
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