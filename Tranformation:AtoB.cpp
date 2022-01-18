#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void print(int n,int x,int i,int &temp[])
{
if(x>n)
return;
else if(x==n)
{cout<<"Yes";
return;}
else
{
    cin>>temp[i];
    print(n,2*x,i+1,temp);
    cin>>temp[i];
    print(n,10*x+1,i+1,temp);
}
}

int main()
{
    int n,x,i=0,temp[100];
    cin>>x>>n;
    print(n,x,i,temp);
    return 0;
}
