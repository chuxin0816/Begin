#include <iostream>
using namespace std;
int main() {
    int money,val;
    cin>>money;
    if(money<=100000) val=money*0.1;
    else if(money<=200000) val=10000+(200000-money)*0.075;
    else if(money<=400000) val=17500+(400000-money)*0.05;
    else if(money<=600000) val=27500+(600000-money)*0.03;
    else if(money<=1000000) val=33500+(1000000-money)*0.015;
    else val=39500+(money-1000000)*0.01;
    cout<<val<<endl;
    return 0;
}