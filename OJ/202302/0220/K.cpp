#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,L,R,arr[10010],val=0;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>arr[i];
    cin>>L>>R;
    for(;L<=R;L++) val+=arr[L];
    cout<<val;
    return 0;
}