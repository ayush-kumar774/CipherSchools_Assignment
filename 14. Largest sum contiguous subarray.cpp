#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> v)
{
        int max_so_far = INT_MIN, max_ending_here = 0;

        for (int i = 0; i < v.size(); i++)
        {
                max_ending_here = max_ending_here + v[i];
                if (max_so_far < max_ending_here)
                        max_so_far = max_ending_here;

                if (max_ending_here < 0)
                        max_ending_here = 0;
        }
        return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        int max_sum = maxSubArraySum(v);
        cout << "Maximum contiguous sum is " << max_sum;
        return 0;
}
