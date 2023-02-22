#include <bits/stdc++.h>
using namespace std;
int zuidagongyueshu(int a,int b)
{
    int i,n;
    for(i=1;i<=min(a,b);i++)
    {
        if(a%i==0&&b%i==0) n=i;
    }
    return n;
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<zuidagongyueshu(a,b)<<endl;
    }
    return 0;
}