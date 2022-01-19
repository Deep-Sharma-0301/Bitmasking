#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n>>i>>j;
    int mask1=(-1<<j+1);
    int mask2=(~(-1<<i));
    mask1=(mask1|mask2);
    cout<<(n&mask1);
    return 0;
}
