#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,c;
    string s;
    while(cin>>n>>l>>c)
    {
     int numline=0,numchar=0,numpage=0;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
         cin>>s;
         v.push_back(s.length());
     }
     for(int i=0;i<v.size();)
     {
         numchar+=v[i];
         if(numchar>c)
         {
             numline++;
             numchar=0;
         }
         else {i++; numchar++;}
     }
     if(numchar>0) numline++;
     numpage=numline/l;
     if(numline%l!=0) numpage++;
     cout<<numpage<<"\n";
     v.clear();
}
    return 0;
}
