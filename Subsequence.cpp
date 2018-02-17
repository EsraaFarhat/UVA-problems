#include <iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int L=0,R=0,sum=0,ans=1e8;
        while(1)
        {
            if(sum<m)
            {
                if(R==n) break;
                sum+=a[R];
                R++;
            }
            else
            {
                ans=min(ans,R-L);
                sum-=a[L];
                L++;
            }
        }
        if(ans==1e8) cout<<0<<"\n";
        else cout<<ans<<"\n";
    }

    return 0;
}
