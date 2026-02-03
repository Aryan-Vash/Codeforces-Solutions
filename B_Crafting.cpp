#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> initial(n), final(n);
        vector<int> diff(n);
        for (int i=0;i<n;i++) {
            cin >> initial[i];
        }
        for (int i=0;i<n;i++) {
            cin >> final[i];
        }
        int count = 0;
        for (int i=0;i<n;i++) {
            if (initial[i] - final[i] < 0) count++;
            diff[i] = initial[i] - final[i];
        }
        if (count > 1) cout << "NO\n";
        else {
            sort(diff.begin(), diff.end());
            if (diff[1] < abs(diff[0])) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}
