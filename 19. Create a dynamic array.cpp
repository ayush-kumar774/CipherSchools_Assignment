#include <bits/stdc++.h>
using namespace std ;
#define int long long

int32_t main()
{
        int n ;
        cin >> n ;
        int *arr = new int[n] ;
        for (int i = 0 ; i < n ; i++)
        {
                cin >> arr[i] ;
        }
        for (int i = 0 ; i < n ; i++)
        {
                cout << arr[i] << endl ;
        }
        delete(arr) ;
        return 0 ;
}