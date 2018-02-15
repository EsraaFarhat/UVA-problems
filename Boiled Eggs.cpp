#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,p,q,sum=0,cnt=0;
        cin>>n>>p>>q;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int k=0;k<min(p,n);k++)
        {
            sum+=a[k];
            if(sum>q) break;
            else cnt++;
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<cnt<<"\n";
    }

    return 0;
}
