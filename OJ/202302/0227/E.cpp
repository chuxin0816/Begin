#include <iostream>
using namespace std;
int jiechen(int n){
    int sum=1;
    for(int i=1;i<=n;++i) sum*=i;
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        cout<<jiechen(n)/(jiechen(m)*jiechen(n-m))<<endl;
    }
    return 0;
}