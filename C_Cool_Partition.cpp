#include <bits/stdc++.h>
using namespace std;
# define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    ll segments = 0;
    ll current_end = n; 

    while (current_end > 0) {
        segments++;

        vector<int> prefix(n + 1, 0);
        ll required_uniques = 0;
        for (int i = 0; i < current_end; ++i) {
            if (prefix[a[i]] == 0) {
                required_uniques++;
            }
            prefix[a[i]]++;
        }
        
        if (required_uniques == 0) { 
            break;
        }

        vector<int> suffix(n + 1, 0);
        ll uniques = 0;
        ll split_point = -1;


        for (int i = current_end - 1; i >= 0; --i) {
            if (suffix[a[i]] == 0) {
                uniques++;
            }
            suffix[a[i]]++;

            if (uniques == required_uniques) {
                split_point = i;
                break;
            }
        }
        
        current_end = split_point;
    }

    cout << segments << endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
