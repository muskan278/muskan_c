#include <bits/stdc++.h>

using namespace std;


// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s)
{
   int c=0;
   while(s-p>=0)
   {
       s-=p;
       c++;
       if(p-d>=m)
       p-=d;
       else
       p=m;
       
   }
   return c;

   // Return the number of games you can buy

}

int main()
{
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    cout<<howManyGames(p,d,m,s);
    return 0;
}
