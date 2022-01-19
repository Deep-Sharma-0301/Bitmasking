#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }
    cout<<ans;
    return 0;
}