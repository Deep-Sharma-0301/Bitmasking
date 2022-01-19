#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;
    int ans=1;
    while(n!=0)
    {
        if((n&1)==1)
        {
            ans=ans*a;
        }
        a=a*a;
        n=n>>1;
    }
    cout<<ans;
    return 0;
}
