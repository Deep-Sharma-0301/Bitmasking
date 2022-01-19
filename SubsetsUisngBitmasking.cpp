//in this approach we will run a loop 2ki power n times kyuki ek string jiski length n hai uske itne hi subsets hote hai
//for each itertaion we will check each bit of i if the bit is 1 at p postion from right the we print char a[p] and we do this til our i is 0
 

#include<bits/stdc++.h>
using namespace std;
void makeSubsetsHelper(char *a,int n)
{
    int j=0;
    while(n!=0)
    {
        if((n&1)==1)
        {
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}
void makeSubsets(char *a,int n)
{
    for(int i=0;i<pow(2,n);i++)
    {
        makeSubsetsHelper(a,i);
    }
}
int main()
{
    char a[1000];
    cin>>a;
    int n=strlen(a);
    makeSubsets(a,n);
    return 0;
}