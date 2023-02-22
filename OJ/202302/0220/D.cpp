#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.size();
        for(auto i=0;i<n;++i){
            if(str[i]>='A')
            str[i]+=4;
            if(str[i]>'z') str[i]-=26;
            else if(str[i]<='Z'+4&&str[i]>'Z') str[i]-=26;
            cout<<str[i];
        }
        cout<<endl;
    }
}