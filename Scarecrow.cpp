#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,cnt=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<s.length();)
        {
            if(s[i]=='.')
            {
                cnt++;
                i+=3;
            }
            else i++;
        }
        cout<<"Case"<<" "<<i+1<<":"<<" "<<cnt<<"\n";
    }

    return 0;
}
