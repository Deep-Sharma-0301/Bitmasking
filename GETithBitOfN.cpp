#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int mask=(n>>i);
    if((mask&1)==0)
    {
        cout<<0;
    }
    else
    {
        cout<<1;
    }
    return 0;
}