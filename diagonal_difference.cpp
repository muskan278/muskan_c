#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int n) 
{
    int a[n][n];
    int l=0,r=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            l+=a[i][j];
            if(i+j==n-1)
            r+=a[i][j];

        }
    }
    return(abs(l-r));
}

int main()
{
    int n;
    cin>>n;
    cout<<diagonalDifference(n);

   return 0;
}

