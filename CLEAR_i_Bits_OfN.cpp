#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    // mask=(~1>>1);//first we created a mask with 32 set bits 
    int mask=(-1<<i);//then we right shift our mask i bits to have i 0's in it a the right side
    cout<<(n&mask);
    return 0;
}
