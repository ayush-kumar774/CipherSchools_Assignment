#include <bits/stdc++.h>
using namespace std;
const int row = 9999;
const int column = 99999;
int mat[row][column];

void printSpiral( int i, int j, int r, int c)
{
        
        if (i >= r or j >= c)
                return;

        
        for (int p = j; p < c; p++)
                cout << mat[i][p] << " ";

        for (int p = i + 1; p < r; p++)
                cout << mat[p][c - 1] << " ";


        if ((r - 1) != i)
                for (int p = c - 2; p >= j; p--)
                        cout << mat[r - 1][p] << " ";


        if ((c - 1) != j)
                for (int p = r - 2; p > i; p--)
                        cout << mat[p][j] << " ";

        printSpiral(i + 1, j + 1, r - 1, c - 1);
}

int32_t main()
{
        int r, c ;
        cin >> r >> c ;  
        for(int i = 0 ; i < r ; i ++)
        {
                for(int j = 0; j < c; j++)
                {
                        cin >> mat[i][j] ;
                }
        }      
        printSpiral(0, 0, r, c);
        return 0;
}

