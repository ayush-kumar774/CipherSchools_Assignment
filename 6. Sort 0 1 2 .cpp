#include <bits/stdc++.h>
using namespace std ;
vector<int> sort012(vector<int> v)
{
        int start  = 0 ;
        int mid  = 0 ;
        int end = ( (int)v.size() ) - 1 ;

        while (mid <= end)
        {
                if (v[mid] == 0)
                {
                        swap(v[start++], v[mid++]) ;
                }
                else if (v[mid] == 2)
                {
                        swap(v[mid], v[end--]) ;
                }
                else
                {
                        mid++ ;
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
        v = sort012(v) ;
        for (auto x : v) cout << x << " " ;
        cout << endl ;
        return 0 ;
}