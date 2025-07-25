#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int g = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                g = gcd(g, abs(p[i] - (i + 1)));
            }
        }

        cout << g << '\n';
    }

    return 0;
}
