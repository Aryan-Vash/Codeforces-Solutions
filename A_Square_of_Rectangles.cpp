#include <bits/stdc++.h>
using namespace std;

bool func(int l[3], int b[3])
{
    long long area = 0;
    for (int i = 0; i < 3; ++i) area +=  l[i] * b[i];

    int S = (int) sqrt(area);            
    if (S * S != area) return false;   

    if (b[0] == S && b[1] == S && b[2] == S &&
        l[0] + l[1] + l[2] == S) return true;                
    if (l[0] == S && l[1] == S && l[2] == S &&
        b[0] + b[1] + b[2] == S) return true;                

    for (int i = 0; i < 3; ++i)
        for (int j = i + 1; j < 3; ++j)
        {
            int k = 3 - i - j;           

            if (b[i] == b[j] && l[i] + l[j] == S &&    
                l[k] == S && b[i] + b[k] == S)         
                return true;

            if (l[i] == l[j] && b[i] + b[j] == S &&    
                b[k] == S && l[i] + l[k] == S)        
                return true;
        }
    return false;          
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;  cin >> T;
    while (T--)
    {
        int l[3], b[3];
        for (int i = 0; i < 3; ++i) cin >> l[i] >> b[i];

        cout << (func(l, b) ? "YES\n" : "NO\n");
    }
    return 0;
}
