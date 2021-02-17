#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> mergeTwoSortedArray(vector<int> arr1, vector<int> arr2)
{
        int n = arr1.size();
        int m = arr2.size();
        int i = 0, j = 0, k = 0;
        vector<int> mergedArray((n + m), 0);
        while (1)
        {
                if (i == n or j == m)
                {
                        break;
                }

                if (arr1[i] < arr2[j])
                { 
                        mergedArray[k] = arr1[i];
                        i++, k++;
                }
                else if (arr1[i] > arr2[j])
                {
                        mergedArray[k] = arr2[j];
                        j++, k++;
                }
                else if (arr1[i] == arr2[j])
                {
                        mergedArray[k] = arr1[i];
                        i++, k++;
                }
        }
        if (i < n)
        {       
                while(i < n)
                {
                        mergedArray[k] = arr1[i];
                        i++, k++;
                }
        }
        if (j < m)
        {       
                while(j < m)
                {
                        mergedArray[k] = arr2[j];
                        j++, k++;
                }
        }

        return (mergedArray) ;
}

int32_t main()
{
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);
        for (auto &x : arr1)
                cin >> x;
        for (auto &x : arr2)
                cin >> x;
        vector<int> mergedArray = mergeTwoSortedArray(arr1, arr2);
        for (auto x : mergedArray)
                cout << x << " ";
        cout << endl;
        return 0;
}