#include <iostream>
#include <cstring>
using namespace std;
char *strAdd(char *s1, char *s2){
    int l1=strlen(s1),l2=strlen(s2);
    char *s3=new char[l1+l2];
    for(int i=0;i<l1;++i) s3[i]=s1[i];
    for(int i=0;i<l2;++i) s3[l1+i]=s2[i];
    return s3;
}
int main(){
    int t;
    cin>>t;
    char s1[10001],s2[10001];
    while(t--){
        cin>>s1>>s2;
        char* s3=strAdd(s1,s2);
        cout<<s1<<' '<<s2<<' '<<s3<<endl;
        delete[] s3;
    }
}