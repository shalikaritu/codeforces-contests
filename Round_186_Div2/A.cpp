#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define endl '\n'

class Solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool is2k25 = false ;
        bool is2k26 = false ;

     if (n >= 4 ){
        for(int i=0 ; i<=n-4 ; i++){
            if (s.substr(i,4) == "2025") is2k25 = true ;
            if (s.substr(i,4) == "2026") is2k26 = true ;
        }
     }
    
    if (is2k26) cout << 0 << endl ;
    else if (! is2k25) cout << 0 << endl ;
    else cout << 1<< endl ;
    }
};

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        Solution().solve();
    }
    return 0;
}