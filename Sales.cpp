/*
File: Sales.cpp
 
Date: Feb 23, 2018
*/
 
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
      {
        int n,cnt=0,res=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
          cin>>a[j];
        for(int j=1;j<n;j++)
          {
            for(int k=0;k<j;k++)
              {
                if(a[j]>=a[k]) cnt++;
              }
            res+=cnt;
            cnt=0;
          }
        cout<<res<<"\n";
      }
 
    return 0;
}
