#include <bits/stdc++.h>
using namespace std;
#define int long long

int firstPosition (vector<int> v, int start, int end , int target , int n)
{
	if (end >= start) {
		int mid = start + (end - start) / 2;
		if ((mid == 0 || target > v[mid - 1]) && v[mid] == target)
			return mid;
		else if (target > v[mid])
			return firstPosition(v, (mid + 1), end, target, n);
		else
			return firstPosition(v, start, (mid - 1), target, n);
	}
	return -1;
}

int lastPosition (vector<int> v , int start, int end, int target, int n)
{
	if (end >= start) {
		int mid = start + (end - start) / 2;
		if ((mid == n - 1 || target < v[mid + 1]) && v[mid] == target)
			return mid;
		else if (target < v[mid])
			return lastPosition(v, start, (mid - 1), target, n);
		else
			return lastPosition(v, (mid + 1), end, target, n);
	}
	return -1;
}

int32_t main()
{
        int n ;
        cin >> n ;
	vector<int> v(n) ;
        for (auto &y : v) cin >> y ;
        int target ;
        cin >> target ;
        
        int first = firstPosition(v, 0, n - 1, target , n) ;
        
        int last = lastPosition(v, 0, n - 1, target , n) ;
        
        cout << "First occurance of " << target << " is " ;
        ((first == -1 )) ? (cout << "not found.") : cout << "found at " << first + 1 << " position." << endl ;
        
        cout << endl ;
        
        cout << "Last occurance of " << target << " is ";
        (last == -1 ) ? cout << "not found." : cout << "found at " << last + 1 << " position." << endl ;
	
        return 0;
}
