#include <bits/stdc++.h>
using namespace std;

#define ll long long

void merge(vector<ll> &arr, vector<ll> &a, int low, int mid, int high) {
    vector<int> temp, temp2; 
    ll left = low;      
    ll right = mid + 1;   

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            temp2.push_back(a[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            temp2.push_back(a[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        temp2.push_back(a[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        temp2.push_back(a[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
        a[i] = temp2[i - low];
    }
}

void mergeSort(vector<ll> &arr, vector<ll> &a, int low, int high) {
    if (low >= high) return;
    ll mid = (low + high) / 2 ;
    mergeSort(arr, a, low, mid);  
    mergeSort(arr, a, mid + 1, high); 
    merge(arr, a, low, mid, high);  
}

void fnc() {
    ll n, k; cin >> n >> k;
    vector <ll> a(n), b(n);
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];
    mergeSort(b, a, 0, n - 1);

    ll ans = k, ind;
    n--;
    for (ind=0;ind<n;ind++) {
        if (b[ind] > k) break;
    }

    ll cnt = 0;
    for (int i=0;i<ind;i++) {
        cnt += a[i];
        ll diff = 0;
        if (n < cnt) {
            diff = cnt - n;
            cnt = n;
        }
        ans += a[i] * b[i];
        ans -= diff * b[i];
    }
    ans += (n - cnt) * k;
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