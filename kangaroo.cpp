#include <bits/stdc++.h>

using namespace std;

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) 
{
    if((x1<x2)&&((v1<v2)||(v1==v2)))
         return "NO";

    if((x1 - x2) % (v2 - v1) == 0)
    return("YES");
    return("NO");
}

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<kangaroo(x1,v1,x2,v2);
    return 0;
}
