#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int dig=(n%2);
        ans=ans*10+dig;
        n=n/2;
    }
    cout<<ans;
    return 0;
}