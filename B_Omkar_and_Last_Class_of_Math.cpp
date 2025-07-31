// 655B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> prime(int n) {
    vector<int> ans;
    ans.push_back(1);
    for (int i=2;i*i<=n;i++) {
        while(n % i == 0){
            ans.push_back(i);
            n /= i;
        }
    }
    return ans;
}

void fnc() {
    ll n; cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }
    vector<int> p = prime(n);
    
    int a = 1;
    // for (auto it: p) cout << it << " ";
    // cout << endl;
    int num = 2;
    int b = n - 1;
    while (num <= sqrt(n)) {
        if (n % num == 0 && b > n - n / num) {
            b = n - n / num;
        }
        num++;
    }
    cout << n - b << " " << b << endl;
    return;
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
