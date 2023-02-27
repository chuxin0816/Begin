#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int students[10010]={0};
        int n,pos;
        cin>>n;
        for(int i=0;i<n;++i) cin>>students[i];
        int *p0=students+n/2;
        cout<<*--p0<<' ';
        p0=students+n/2;
        cout<<*++p0<<endl;
        cin>>pos;
        int *p1=students+pos-1;
        cout<<*p1<<endl;
    }
    return 0;
}