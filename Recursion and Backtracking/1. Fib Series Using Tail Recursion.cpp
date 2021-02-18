#include <bits/stdc++.h>
using namespace std ;
#define int long long

int fibTail(int n, int a , int b)
{
        if (n == 0)
                return a ;
        if (n == 1)
                return b ;
        return fibTail(n - 1, b , a + b) ;
}

int32_t main()
{
        int n ;
        cin >> n ;
        cout << fibTail(n, 0, 1) << endl ;
        return 0 ;
}