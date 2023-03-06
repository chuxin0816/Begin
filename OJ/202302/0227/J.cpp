#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    int cnt[3]={0};
    cin>>t;
    while (t--){
        string a;
        cin>>a;
        if(a=="Li") cnt[0]++;
        else if(a=="Zhang") cnt[1]++;
        else if(a=="Fu") cnt[2]++;
    }
    cout<<"Li:"<<cnt[0]<<endl<<"Zhang:"<<cnt[1]<<endl<<"Fu:"<<cnt[2]<<endl;
    return 0;
}