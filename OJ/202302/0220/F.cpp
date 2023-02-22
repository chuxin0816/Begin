#include <bits/stdc++.h>
using namespace std;
long change(char s[]){
    int val=0,jie=0;
    for(int n=strlen(s)-1;n>=0;--n) {
        if(s[n]>='A')
        val+=(s[n]-'A'+10)*pow(16,jie++);
        else  val+=(s[n]-'0')*pow(16,jie++);

    }
    return val;
}
int main(){
    int t;
    char s[10010];
    cin>>t;
    while(t--){
    cin>>s;
    cout<<change(s)<<endl;
    }
    return 0;
}