#include <bits/stdc++.h>
using namespace std;
#define int long long

void helper(vector<string> &v, string s, int n, int open, int close) 
{
        if (open == n && close == n) 
        {
                v.push_back(s);
                return;
        }
        if (open < n) 
        {
                helper(v, s + "(", n, open + 1, close);
        }
        
        if (open > close) 
        {
                helper(v, s + ")", n, open, close + 1);
        }
}
vector<string> generateParenthesis(int n) 
{
        vector<string> v;
        helper(v, "", n, 0, 0);
        return v;
}

int32_t main() {
        int n;
        cin >> n;
        vector<string>parenthesis = generateParenthesis(n);
        int counter = 1 ;
        for (auto x : parenthesis)
        {
                cout << "#" <<counter << " " << x << endl ;
                counter++ ;
        }
      
        return 0;
}