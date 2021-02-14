#include <bits/stdc++.h>
using namespace std ;
#define int long long

int32_t main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto & x : v) cin >> x ;
        sort(v.begin(), v.end()) ;
        int i = 0 , j = n - 1 ;
        while (n > 0)
        {
                cout << v[j] << " " ;
                n-- ;
                if (n >= 1)
                {
                        cout << v[i] << " " ;
                }       
                if (n == 1)
                {
                        break ;
                }
                j-- , i++ ; 
                n -- ;
        }
        return 0 ;
}