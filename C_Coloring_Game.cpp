#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    int n;
    cin >> n;
    vector<ll> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;

    for (int k = n - 1; k >= 2; k--) {
        int mx = max(a[k],a[n-1] -a[k]);
        int left = 0;
        int right = k - 1;

        while (left < right) {
            if (a[left] + a[right] > mx) {
                ans += (right - left);
                
                right--;
            } else {
                left++;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        fnc();
    }
    return 0;
}