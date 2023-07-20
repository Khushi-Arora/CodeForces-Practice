#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ans=0;
    vector<int>a;
    vector<int>b;
    vector<int>s(n,0);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j] && i!=j)
            s[i]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==0)
        ans++;
    }
    cout<<ans;
    return 0;
}
