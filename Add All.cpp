#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
     int x,cst=0,sum=0;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
     cin>>x; v.push_back(x);
     }
     sort(v.begin(),v.end());
     while(v.size()>1)
     {
         sum=v[0]+v[1];
         cst+=sum;
         v.push_back(sum);
         v.erase(v.begin());
         v.erase(v.begin());
         sort(v.begin(),v.end());
     }
     cout<<cst<<"\n";
    }

    return 0;
}
