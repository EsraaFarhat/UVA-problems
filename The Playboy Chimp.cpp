#include <iostream>

using namespace std;


int bsl(int Lheight[],int st,int e,int k)
{
    while(st<e)
    {
        int mid=st+(e-st+1)/2;
        if(k<Lheight[mid]) e=mid-1;
        else st=mid;
    }
    return st;
}
int bsf(int Lheight[],int st,int e,int k)
{
    while(st<e)
    {
        int mid=st+(e-st)/2;
        if(k>Lheight[mid]) st=mid+1;
        else e=mid;
    }
    return st;
}

int main()
{
    int n,q,low,high;
    cin>>n;
    int Lheight[n];
    for(int i=0;i<n;i++)
        cin>>Lheight[i];
    cin>>q;
    int cheight;
    for(int i=0;i<q;i++)
    {
        cin>>cheight;
        if(cheight>Lheight[n-1]) low=n;
        else
            low=bsf(Lheight,0,n-1,cheight);
        if(cheight<Lheight[0]) high=-1;
        else
            high=bsl(Lheight,0,n-1,cheight);
        if(cheight<=Lheight[0]) cout<<"X";
        else cout<<Lheight[low-1];
        cout<<" ";
        if(cheight>=Lheight[n-1]) cout<<"X";
        else cout<<Lheight[high+1];
        cout<<"\n";
    }

    return 0;
}
