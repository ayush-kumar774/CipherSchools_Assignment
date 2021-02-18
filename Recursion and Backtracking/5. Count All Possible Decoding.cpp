#include <bits/stdc++.h>
using namespace std ;
#define int long long

int numDecodings(string s) 
{
        if(s.empty() or s[0]=='0')  return 0;   
        if(s.size() == 1) return 1;               
        
        int n = s.size();

        int count1 = 1, count2 = 1;
        for(int i = 1; i < n; i++)
        {
            int count = 0 ;
            int d = s[i] - '0';
            int dd = (s[i-1] - '0') * 10 + d;
    
            if(d > 0) count += count1;
               
            if(dd > 9 and dd < 27)   count += count2;

            count2 = count1;
            count1 = count;
        }
        return count1;
        
}

int32_t main()
{
        string str ;
        cin >> str ;
        int ans = numDecodings(str) ;
        cout << ans << endl ;
        return 0 ;
}