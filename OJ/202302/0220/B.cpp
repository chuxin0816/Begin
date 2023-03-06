#include <iostream>
using namespace std;
int main() {
    int* p;
    int i;
    cin>>i;
    if(i==0) p= nullptr;
    else if(i==1) p=&i;
    if(!p) cout<<"NULL\n";
    else cout<<"Initialized\n";
    return 0;
}