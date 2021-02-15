#include <bits/stdc++.h>
using namespace std ;
#define int long long

int findingPeak(vector<int> v, int start , int end , int n)
{
        int mid = start + (end - start) / 2 ;

        if ((mid == 0) or v[mid - 1] <= v[mid] and (mid == n - 1 or v[mid + 1] <= v[mid])) 
        {
                return mid ;
        }

        else if (mid > 0 and v[mid - 1] > v[mid])
        {
                return findingPeak(v, start, (mid + 1), n) ;
        }
        

        else
        {
                return findingPeak(v, (mid + 1), end, n) ;
        }
}


int peakElement(vector<int> v)
{
        int n = v.size() ;
        int ans = findingPeak(v, 0, n - 1 , n) ;
        return ans ;
}


int32_t main()
{
        int n ;
        cin >> n ;
        vector <int> v(n) ;
        for(auto &x : v) cin >> x ;
        cout << v[peakElement(v)] << endl ;
        return 0 ;
}