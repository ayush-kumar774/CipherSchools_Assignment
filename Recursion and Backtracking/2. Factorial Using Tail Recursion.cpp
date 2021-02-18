#include <bits/stdc++.h>
using namespace std ;
#define int long long

int factorialTail(int n, int a)
{
        if (n == 0) return a ;

        return factorialTail(n - 1 , n * a) ;
}

int32_t main()
{
        int n ;
        cin >> n ;
        cout << factorialTail(n , 1) << endl ;
        return 0 ;
}