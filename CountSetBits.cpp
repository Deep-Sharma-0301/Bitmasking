#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    //******APPROACH-1*********TC=O(kogN)+1
    // while(n!=0)
    // {
    //     int ld=(n&1);
    //     if(ld==1)
    //     {
    //         count++;
    //     }
    //     n=n>>1;
    // }

    //*******APPROACH-1*********TC=O(number of Set Bits)
    while(n!=0)
    {
        n=(n&(n-1));//this removes the set bits so this loops will only run number of set bits times
        count++;
    }

    n=31;
    //*******APPROACH-3*************
    cout<<__builtin_popcount(n)<<endl;
    cout<<count;
}
