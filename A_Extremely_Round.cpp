#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll arr[] = {10, 100, 1000, 10000, 100000, 1000000};

void fnc() {
    ll n; cin >> n;
    int ind = 0;
    for (int i=0;i<6;i++) {
        if (n / arr[i] == 0) {
            ind = i;
            break;
        }
    }

    int ans = 0, temp = 0;
    for (int i=0;i<=ind;i++) {
        int num = arr[i] / 10;
        while (temp + num <= min(arr[i], n)) {
            // cout << temp << endl;
            ans++;
            temp += num;
        }
        // cout << "ans: " << ans << endl;
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