#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p,mn=10000;
        cin>>p;
        int x;
        vector<vector <int> >v(1005);
        vector<int>ans;
        for(int j=0;j<p;j++)
        {
        	do
            {if(cin>>x) v[j].push_back(x);}
            while(cin&&cin.peek()!='\n');
            int sz=v[j].size();
            mn=min(mn,sz);
       // cout<<mn<<" "<<sz<<"\n";
        }
        for(int j=0;j<p;j++)
        {
            if(v[j].size()==mn) ans.push_back(j+1);
        }
        cout<<ans[0];
        for(int j=1;j<ans.size();j++)
            cout<<" "<<ans[j];
        cout<<"\n";
    }

    return 0;
}
