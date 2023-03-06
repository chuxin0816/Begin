#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        int n,cnt=0;
        cin>>n;
        for(int i=7;i<=n;++i)
            if(i%3&&i%4&&i%7==0) cnt++;
            cout<<cnt<<endl;
    }
    return 0;
}