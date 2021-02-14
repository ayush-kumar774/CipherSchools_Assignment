#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        cout << "Please enter number in sorted order.\n";
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < m; j++)
                {
                        cin >> arr[i][j];
                }
        }
        cout << "Enter element which you want to search ";
        int target;
        cin >> target;
        int smallest = arr[0][0], largest = arr[n - 1][m - 1];
        if (target < smallest or target > largest)
        {
                cout << "Element is not found";
        }
        int i = 0, j = m - 1;
        while (i < n and j >= 0)
        {
                if (arr[i][j] == target)
                {
                        cout << "Element is found at arr[" << i + 1 << "] [" << j + 1 << "] place.\n";
                }
                else if (arr[i][j] > target)
                {
                        j--; // left column
                }
                else
                        i++; // next row
        }
        //cout << i << " " << j << endl ;
        if (i == n or j < 0)
        {
                cout << "Element is not found" << endl;
        }
        return 0;
}
