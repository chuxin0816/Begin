#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int xh1,xh2;
    char xinbie;
    string xingming;
    double jidian;
    cin>>xh1>>xh2>>xinbie>>xingming>>jidian;
    cout<<xingming<<endl<<xh1<<" "<<xh2<<endl<<xinbie<<endl<<fixed<<setprecision(1)<<jidian<<endl;
    return 0;
}