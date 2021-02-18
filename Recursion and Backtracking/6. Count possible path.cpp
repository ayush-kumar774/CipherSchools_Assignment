#include <bits/stdc++.h>
using namespace std; 
#define int long long

int possiblePaths(int n, int m) 
{ 
	if (n == 1 || m == 1) 
		return 1; 

	return possiblePaths(n - 1, m) + possiblePaths(n, m - 1);  
} 

int32_t main() 
{ 
        int n , m ;
        cin >> n >> m ;
	cout << possiblePaths(n , m); 
	return 0; 
} 
