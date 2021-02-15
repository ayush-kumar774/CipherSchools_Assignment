#include <bits/stdc++.h>
using namespace std ;
#define int long long

int32_t main()
{
        int n ;
        cin >> n ;
        vector <int> v(n) ;
        map<int, int> mp ;
        for(auto &x : v)
        {
                cin >> x ;
                mp[x]++;
        }
        int mid = n / 2 ;
        bool found = false ;
        for (auto x : mp)
        {
                if (x.second > mid)
                {
                        cout << x.first << endl ;
                        found = true ;
                        break ;
                }
        }
        if (!(found)) 
        {
                cout << "Not found" << endl ;
        }
}