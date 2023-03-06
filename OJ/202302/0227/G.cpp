#include <iostream>
using namespace std;
int main(){
    int t,n,m,arr[1000][1000];
    cin>>t;
    while (t--){
        cin>>n>>m;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j) cin>>arr[i][j];
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n-1;++j){
            cout<<arr[j][m-i-1]<<" ";
            }
            cout<<arr[n-1][m-i-1]<<endl;
        }
    }
    return 0;
}