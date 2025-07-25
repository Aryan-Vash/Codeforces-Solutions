#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    for (int i=0;i<n-1;i++) {
        if (abs(v[i] - v[i+1]) <= 1) {
            cout << 0 << endl;
            return;
        }
    }

    if (n == 2) {
        if (abs(v[0] - v[1]) > 1) {
            cout << -1 << endl;
            return;
        }
        else {
            cout << 1 << endl;
            return;
        }
    }

    int flag = -1;
    for (int i=1;i<n-1;i++) {
        if ((v[i] >= v[i-1] && v[i] >= v[i+1]) || (v[i] <= v[i-1] && v[i] <= v[i+1])) {
            flag = i;
            break;
        }
    }

    if (flag == -1) {
        cout << -1 << endl;
        return;
    }
    
    // if (abs(v[flag-1] - v[flag+1]) <= 1) {
    //     cout << 1 << endl;
    //     return;
    // }

    cout << 1 << endl; 
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