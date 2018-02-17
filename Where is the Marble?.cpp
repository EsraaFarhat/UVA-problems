#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysrch(int marble[],int st,int e,int k)
{
    while(st<e)
    {
        int mid=st+(e-st)/2;
        if(k>marble[mid]) st=mid+1;
        //else if(k<marble[mid]) e=mid-1;
        else e=mid;
    }
    return st;
}

int main()
{
    int n,q,j=0;
    while(cin>>n>>q&&n!=0&&q!=0)
    {
        j++;
        cout<<"CASE#"<<" "<<j<<":"<<"\n";
        int marble[n],query;
        for(int i=0;i<n;i++)
            cin>>marble[i];
        sort(marble,marble+n);
        for(int i=0;i<q;i++)
        {
            cin>>query;
            int x=binarysrch(marble,0,n-1,query);
            if(marble[x]!=query) cout<<query<<" not found"<<"\n";
            else cout<<query<<" found at "<<x+1<<"\n";
        }
    }

    return 0;
}
