#include <bits/stdc++.h>
using namespace std ;
#define int long long

bool isGoingToMeet(int position1, int position2, int velocity1, int velocity2)
{
        if (position1 > position2 and velocity1 > velocity2)
        {
                return false ;
        }
        
        if (position2 > position1 and velocity2 > velocity1)
        {
                return false ;
        }

        if (position1 < position2) 
        {
                swap (position1 , position2) ;
                swap (velocity1, velocity2) ;
        }

       
        return ((position1 - position2) % (velocity1 - velocity2) == 0);
}

int32_t main()
{
        int position1, position2 ;
        cin >> position1 >> position2 ;

        int velocity1 , velocity2 ;
        cin >> velocity1 >> velocity2 ;

        if (isGoingToMeet(position1, position2, velocity1, velocity2))
        {
                cout << "Yes" << endl ;
        }
        else
        {
                cout << "No" << endl ;
        }
}