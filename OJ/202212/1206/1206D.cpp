#include <bits/stdc++.h>
using namespace std;
void yiwei(int array[],int n,int m)
{
    for(int i=n-m;i<n;i++)
    cout<<array[i]<<" ";
    for(int i=0;i<n-m;i++)
    cout<<array[i]<<" ";
}
int main()
{
    int n,m;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    cin>>array[i];
    cin>>m;
    yiwei(array,n,m);
    return 0;
}