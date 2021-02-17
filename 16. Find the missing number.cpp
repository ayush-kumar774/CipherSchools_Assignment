#include <bits/stdc++.h>
using namespace std;

int missingNumber (vector<int> v)
{
        int n = v.size();
        int elementSum = n * (n + 1) / 2;
        int sum = 0;

        for (int i = 0; i < n - 1; i++)
                sum += v[i];

        return (elementSum - sum);
}

int main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        cout << missingNumber(v) << endl ;
        return 0;
}


