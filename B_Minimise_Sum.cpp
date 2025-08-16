#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <ll> nums(n);
    for (int i=0;i<n;i++) cin >> nums[i];

    if (nums[0] > nums[1]) {
        cout << nums[0] + nums[1] << endl;
        return;
    }
    else if (n > 2) {
        nums[1] += nums[2], nums[2] = 0;
        cout << nums[0] * 2 << endl;
        return;
    }

    // for (auto it: nums) cout << it << " ";

    ll ans = 0, mini = 1e9;
    for (int i=0;i<n;i++) {
        mini = min(mini, nums[i]);
        ans += mini;
        if (mini == 0) break;
    }
    cout << ans << endl;


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