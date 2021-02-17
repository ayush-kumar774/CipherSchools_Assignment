#include <bits/stdc++.h>

using namespace std;


int findPlatform(vector<int> arr, vector<int> dep, int n)
{
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int platforms = 1, result = 1;
        int i = 1, j = 0;

        while (i < n && j < n)
        {
                
                if (arr[i] <= dep[j])
                {
                        platforms++;
                        i++;
                }

              
                else if (arr[i] > dep[j])
                {
                        platforms--;
                        j++;
                }

                if (platforms > result)
                        result = platforms;
        }

        return result;
}


int main()
{
        int n ;
        cin >> n ;
        vector<int> arr(n) ;
        vector<int> dep(n) ;
        cout << findPlatform(arr, dep, n);
        return 0;
}
