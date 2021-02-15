#include <bits/stdc++.h>
using namespace std;

int getInversionCount(vector<int> v)
{
        int n = v.size() ;
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
	{
                for (int j = i + 1; j < n; j++)
		{
                        if (v[i] > v[j])
				{
                                        inv_count++;
                                }
                }
        }

	return inv_count;
}


int main()
{
	int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        cout << getInversionCount(v) << endl ;
	return 0;
}

