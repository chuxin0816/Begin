#include <iostream>
using namespace std;
void sort(int *p1,int *p2,int *p3){
    int _max=max(max(*p1,*p2),*p3);
    int _min=min(min(*p1,*p2),*p3);
    int _mid=*p1+*p2+*p3-_max-_min;
    *p1=_max,*p2=_mid,*p3=_min;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int *p1=&a,*p2=&b,*p3=&c;
        sort(p1,p2,p3);
        cout<<*p1<<' '<<*p2<<' '<<*p3<<' '<<endl;
    }
    return 0;
}