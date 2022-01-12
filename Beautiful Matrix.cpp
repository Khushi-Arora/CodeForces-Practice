#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a[100][100],c=0,b=0,res;
       
       for(int i=1;i<=5;i++)
       {
        for(int j=1;j<=5;j++)
       {
           cin>>a[i][j];
           if(a[i][j]==1)
           {
               c=i;
               b=j;
           }
       }
        cout<<endl;
       }
       c=(3-c);
       b=(3-b);
       res=abs(c)+abs(b);
       cout<<res;
    return 0;
}
