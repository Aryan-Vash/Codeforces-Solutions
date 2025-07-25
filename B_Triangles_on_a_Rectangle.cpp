#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fnc() {
    ll w, h; cin >> w >> h;
    ll a1, a2, a3, a4;
    cin >> a1;
    vector<ll> arr1(a1);
    for (int i=0;i<a1;i++) cin >> arr1[i];

    cin >> a2;
    vector<ll> arr2(a2);
    for (int i=0;i<a2;i++) cin >> arr2[i];

    cin >> a3;
    vector<ll> arr3(a3);
    for (int i=0;i<a3;i++) cin >> arr3[i];

    cin >> a4;
    vector<ll> arr4(a4);
    for (int i=0;i<a4;i++) cin >> arr4[i];

    ll maxi = 0;
    maxi = max(maxi, (arr1[a1 - 1] - arr1[0]) * h);
    maxi = max(maxi, (arr2[a2 - 1] - arr2[0]) * h);
    maxi = max(maxi, (arr3[a3 - 1] - arr3[0]) * w);
    maxi = max(maxi, (arr4[a4 - 1] - arr4[0]) * w);
    cout << maxi << endl;
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