#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,v;
    cin>>n>>i>>v;
    int mask1=(~(1<<i));//to clear the ith bit
    n=(n&mask1);
    int mask2=(v<<i);
    cout<<(n|mask2);
    return 0;
}