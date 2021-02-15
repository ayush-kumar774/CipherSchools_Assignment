#include <bits/stdc++.h>
using namespace std ;
#define int long 

void printKSmallestElements(vector<int> v , int k)
{

        for (int i = k; i < v.size(); i++)
        {

                int max = v[k - 1];
                int max_position = k - 1;

                for (int j = k - 2; j >= 0; j--)
                {
                        if (v[j] > max)
                        {
                                max = v[j];
                                max_position = j;
                        }
                }

                int currentElement = v[i];

                if (max > currentElement)
                {

                        int m = max_position;
                        while (m < k - 1)
                        {
                                v[m] = v[m + 1];
                                m++;
                        }
                        v[k - 1] = currentElement;
                }
        }

        for (int i = 0; i < k; i++)
        {
                cout << v[i] << " ";
        }
        cout << endl ;
}

int32_t main()
{
        int n , k ;
        cin >> n >> k ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        printKSmallestElements(v, k) ;
        return  0 ;
}