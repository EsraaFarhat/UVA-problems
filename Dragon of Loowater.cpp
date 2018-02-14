#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0;
    string s="";
    vector<int>v1;
    vector<int>v2;
    while(cin>>n>>m&&(n!=0&&m!=0))
    {
     int x;
     cnt=0;
     s="";
     for(int i=0;i<n;i++)
         {cin>>x; v1.push_back(x);}
     for(int i=0;i<m;i++)
         {cin>>x; v2.push_back(x);}
     if(m<n) cout<<"Loowater is doomed!"<<"\n";
     else
     {
         sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
         for(int i=0;i<v1.size();)
         {
             if(v2[i]<v1[i])
             {
                v2.erase(v2.begin()+i);
                if(v2.size()<v1.size()) {s="Loowater is doomed!"; break;}
             }
             else
             {
                 cnt+=v2[i];
                 v1.erase(v1.begin()+i);
                 v2.erase(v2.begin()+i);

             }
         }
         if(s=="") cout<<cnt<<"\n";
         else cout<<s<<"\n";
         v1.clear();
         v2.clear();
     }
    }

    return 0;
}
