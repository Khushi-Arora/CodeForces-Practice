//https://codeforces.com/contest/1294/problem/C
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,a=1,b=1,c=1;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
         a=i;
        break;
        }
    }
    n=n/a;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && i!=a)
        {
            b=i;
            break;
        }
    }
    c=n/b;
    
    if(a!=1 && b!=1 && c!=1 && c!=b)
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else
    cout<<"NO"<<endl;
    }
    return 0;
}
