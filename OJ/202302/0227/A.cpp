#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char a,b,y;
        int x;
        cin>>a>>b>>x>>y;
        if(b=='+')
        cout<<right<<setw(x)<<setfill(y)<<a<<endl;
        else         cout<<left<<setw(x)<<setfill(y)<<a<<endl;

    }
}