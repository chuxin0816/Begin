#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--) {
        int num, wei = 0;
        cin >> num;
        int num1=num;
        while (num1) {
            wei++;
            num1 /= 10;
        }
        if (num % 6 == 0 || num % 10 == 6) {
            cout << "Yes\n";
            continue;
        }
        else if (wei % 6 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}