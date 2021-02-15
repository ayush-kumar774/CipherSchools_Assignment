#include <bits/stdc++.h>
using namespace std ;

int maxTrappedWater(vector<int> v)
{
        int n = v.size() ;
        vector<int> right(n, 0) ;
        vector<int> left(n, 0) ;
        int maxx = v[0] ;
        for (int i = 0 ; i < n; i++)
        {
                if (maxx < v[i])
                {
                        maxx = v[i] ;
                }
                left[i] = maxx ;
        }
        maxx = v[n - 1] ;
        for (int i = n - 1 ; i >= 0; i--)
        {
                if (maxx < v[i])
                {
                        maxx = v[i] ;
                }
                right[i] = maxx ;
        }
        
        int totalWater = 0;

        for(int i = 0; i < n; i++) {
            totalWater  += min(left[i], right[i]) - v[i];
        }

        return totalWater;
}

int32_t main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        cout << maxTrappedWater(v) << endl ;
}