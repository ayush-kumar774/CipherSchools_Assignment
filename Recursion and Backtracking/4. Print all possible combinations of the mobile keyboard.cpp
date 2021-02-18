#include <bits/stdc++.h>
using namespace std;
#define int long long

map<char, string> m;
void solve(string &digits, vector<string> &ret, int i) 
{
        if(i == digits.size()) {
            ret.push_back(digits);
            return;
        }
        for(auto c:m[digits[i]]) {
            auto tmp = digits[i];
            digits[i] = c;
            solve(digits, ret, i+1);
            digits[i] = tmp;
        }
}
vector<string> letterCombinations(string digits) 
{
        if(!digits.size()) return {};
        
        m.insert(make_pair('2',"abc"));
        m.insert(make_pair('3',"def"));
        m.insert(make_pair('4',"ghi"));
        m.insert(make_pair('5',"jkl"));
        m.insert(make_pair('6',"mno"));
        m.insert(make_pair('7',"pqrs"));
        m.insert(make_pair('8',"tuv"));
        m.insert(make_pair('9',"wxyz"));
        
        vector<string> ret;
        solve(digits, ret, 0);
        return ret;
}

int32_t main()
{
        string digits;
        cin >> digits;
        vector<string>ans = letterCombinations(digits) ;
        int counter = 1 ;
        for(auto x : ans)
        {
                cout << "#" << counter << " -> " << x << endl ;
                counter++ ;
        }
        return 0 ;
}