#include <bits/stdc++.h>

using namespace std;

void simpleArraySum() 
{
long long int a[5],s,low,high;
int i;
cin>>a[0];
low=a[0];
high=a[0];
s=a[0];
for(i=1;i<5;i++)
{
    cin>>a[i];
    s+=a[i];
    if(low>a[i])
    low=a[i];
    if(high<a[i])
    high=a[i];
}
cout<<s-high<<" "<<s-low;
}

int main()
{

simpleArraySum();
return 0;
}
