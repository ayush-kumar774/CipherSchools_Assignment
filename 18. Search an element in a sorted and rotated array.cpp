#include <bits/stdc++.h>
using namespace std;

int searchElement(vector<int> arr, int l, int h, int target)
{
        if (l > h)
                return -1;

        int mid = (l + h) / 2;
        if (arr[mid] == target)
                return mid;

        if (arr[l] <= arr[mid])
        {
              
                if (target >= arr[l] && target <= arr[mid])
                        return searchElement(arr, l, mid - 1, target);
               
                return searchElement(arr, mid + 1, h, target);
        }

       
        if (target >= arr[mid] && target <= arr[h])
                return searchElement(arr, mid + 1, h, target);

        return searchElement(arr, l, mid - 1, target);
}


int main()
{
        int n , target ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &X : v) cin >> X ;
        cin >> target ;
        int index = searchElement(v, 0, n - 1, target) ;
        if (index != -1)
        {
                cout << "Element is found at " << index + 1 << " position" << endl ;
        }
        else 
        {
                cout << "Not found" << endl ;
        }
        return  0 ;
}
