#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    int res = min(a, b);

    while (res > 1) {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
	return res;
}

void fnc() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());

    int g = v[0];  
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            g = gcd(v[i], v[j]);
            if (g <= 2) {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
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