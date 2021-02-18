#include <bits/stdc++.h>
using namespace std;
#define int long long
// i -> represents x axis 
// j -> represents y axis 
// intially i = 0 , j = 0 ;
int uniquePath(int i = 0, int j = 0, int m, int n) {
        if (i == m || j == n)
                return 0; 

        if (i == m - 1 && j == n - 1)
                return 1; 

        return uniquePath(i + 1, j, m, n) + uniquePath(i, j + 1, m, n) ;
}

int32_t main()
{
        int m , n ;
        cin >> m >> n ;
        cout << uniquePath(m, n) << endl ;
        return 0 ;
}