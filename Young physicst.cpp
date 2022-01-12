#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
 
   cin>>t;
   int a[100][100],flag=0,res=0;
       
       for(int i=0;i<=t-1;i++)
       {
        for(int j=0;j<=2;j++)
       {
           cin>>a[i][j];
       }
        cout<<endl;
       }
       for(int j=0;j<=2;j++)
       {
        for(int i=0;i<=t-1;i++)
       {
            res=res+a[i][j];
       }
       if(res==0)
       {flag++;
       continue;}
       else
       break;
       }
    if(flag==3)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
