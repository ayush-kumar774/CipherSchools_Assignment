#include <bits/stdc++.h>
using namespace std ;
#define int long long

int maxProfit(vector<int> prices)
{
        int profit = 0;
        int buy = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
                if (prices[i] < buy)
                {
                        buy = prices[i];
                }
                profit = max(profit, (prices[i] - buy));
        }
        return profit;
}

int32_t main()
{
        int n ;
        cin >> n ;
        vector<int> prices(n) ;
        for(auto &x : prices) cin >> x ;
        cout << maxProfit(prices) << endl ;
        return 0;
}
