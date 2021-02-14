#include <bits/stdc++.h>
using namespace std ;
#define int long long

vector<int> segregate(vector<int> v)
{
        int n = v.size() ;

        int zero = 0 ;
        int one = n - 1 ;

        while (zero < one)
        {
                if (v[zero] == 1)
                {
                        swap(v[zero], v[one]) ;
                        one-- ;
                }

                else
                {
                        zero++ ;
                }
        }
        return v ;
}

int32_t main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) 
        {
                cin >> x ;
        } 
        v = segregate(v) ;
        for (auto x : v) cout << x << " " ;
        cout << endl ;
        return 0 ;
}