#include <bits/stdc++.h>

using namespace std;

long long int simpleArraySum(int n) 
{
int i;
long long int m,s=0;
for(i=0;i<n;i++)
{
    cin>>m;
    s+=m;
}
return s;
}

int main()
{
int n;
cin>>n;
cout<<simpleArraySum(n);
return 0;
}
