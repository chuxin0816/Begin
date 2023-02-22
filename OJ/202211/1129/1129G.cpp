#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int array[n][n];
        for(j=0;j<n;j++)
        {
            for(k=0;k<=j;k++)   cin>>array[j][k];
        }
        for(j=n-1;j>0;j--)
        {
            for(k=0;k<j;k++)   {
                array[j-1][k]+=max(array[j][k],array[j][k+1]);
            }
        }
        cout<<array[0][0]<<endl;
    }
}