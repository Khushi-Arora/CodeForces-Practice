#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int flag=0;

void print(int n,int x,int i,vector<int> temp)
{
temp.push_back(x);
if(x>n)
{
return ;}
else if(x==n)
{cout<<"YES"<<endl;
flag++;
cout<<i+1<<endl;
for(int k=0;k<=i;k++)
{
    cout<<temp[k]<<" ";
}
return ;}
else
{
    print(n,2*x,i+1,temp);
    print(n,10*x+1,i+1,temp);
}
}

int main()
{
    int n,x;
    vector<int>temp;
    cin>>x>>n;
    print(n,x,0,temp);
    if(flag==0)
    {
        cout<<"NO";
    }
    return 0;
}
