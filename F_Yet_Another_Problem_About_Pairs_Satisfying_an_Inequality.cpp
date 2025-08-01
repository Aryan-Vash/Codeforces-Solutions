#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll n; cin >> n;
    vector <ll> arr(n), ind(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    for (int i=0;i<n;i++) ind[i] = i + 1;

    vector<pair<ll,ll> > nums;
    for (int i=0;i<n;i++) {
        pair<ll,ll> p = make_pair(arr[i], ind[i]);
        if (ind[i] > arr[i]) nums.push_back(p);
    }

    sort(nums.begin(), nums.end());
    // for (int i=0;i<nums.size();i++) cout << nums[i].first << " " << nums[i].second << endl;

    ll ans = 0;
    // set<pair<int,int> > 
    for (int i=0;i<nums.size();i++) {
        ll low = i + 1, high = nums.size() - 1;
        ll cnt = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (nums[i].second < nums[mid].first) {
                cnt = nums.size() - mid;
                high = mid - 1;
                // cout << nums[i].first << " " << nums[i].second << " " << nums[mid].first << " " << nums[mid].second << endl;
            }
            else low = mid + 1;
        }
        ans += cnt;
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