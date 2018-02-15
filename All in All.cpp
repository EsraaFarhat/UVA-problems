#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s,t;
   while(cin>>s>>t)
    {
            int cnt=0;
            int S=s.length(), T=t.length();
            int j=T-1;
            for(int i=S-1;i>=0;i--)
            {
                for(;j>=0;j--)
                {
                   if(s[i]==t[j])
                   {
                       cnt++;
                       j--;
                       break;
                   }
                 }
            }
            if(cnt==S) cout << "Yes"<<endl;
            else cout << "No"<<endl;
   }

    return 0;
}
