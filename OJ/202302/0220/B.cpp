#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int la,lb,wa,wb,ha,hb;
        cin>>la>>wa>>ha>>lb>>wb>>hb;
        int maxa=max(max(la,wa),ha),mida=min(max(la,wa),ha),mina=min(min(la,wa),ha);
        int maxb=max(max(lb,wb),hb),midb=min(max(lb,wb),hb),minb=min(min(lb,wb),hb);
        if(maxa<=maxb&&mida<=midb&&mina<=minb) cout<<"yes\n";
        else if(maxa>=maxb&&mida>=midb&&mina>=minb) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}