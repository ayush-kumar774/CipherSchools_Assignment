
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int l, int r, int target)
{
        if (r >= l)
        {
                int mid = l + (r - l) / 2;

                
                if (arr[mid] == target)
                        return mid;

                
                if (arr[mid] > target)
                        return binarySearch(arr, l, mid - 1, target);

                
                return binarySearch(arr, mid + 1, r, target);
        }

       
        return -1;
}

int main(void)
{
        int n ;
        cin >> n ;
        vector<int> arr(n) ;
        for(auto &x :arr) cin >> x ;
        int target ;
        cin >> target ;
        int result = binarySearch(arr, 0, n - 1, target);
        (result == -1) ? cout << "Element is not found" << endl 
                       : cout << "Element is found at " << result + 1 << endl ;
        return 0;
}
