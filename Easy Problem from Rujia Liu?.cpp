#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,k,v;
    while(cin>>n>>m)
    {
        vector<vector <int> >vi(1000000);
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vi[x].push_back(i+1);
        }
        for(int i=0;i<m;i++)
        {
            cin>>k>>v;
            if(vi[v].size()>=k) cout<<vi[v][k-1]<<"\n";
            else  cout<<0<<"\n";
        }
    }

    return 0;
}
