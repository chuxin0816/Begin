#include <bits/stdc++.h>
using namespace std;
class CDate{
    public:
    int year,month,day;
    CDate(int date=0){
        year=date/10000;
        month=date/100%100;
        day=date%100;
    }   
    operator int(){
        return year*10000+month*100+day;
    }
    void Print(){
        cout<<year<<"年"<<setw(2)<<setfill('0')<<month<<"月"<<day<<setw(2)<<setfill('0')<<"日"<<endl;
    }
};
int main()

{

int t, t1, t2;

CDate C1, C2;

cin>>t;

while (t--)

{cin>>t1>>t2;

C1 = t1;

C2 = t2;

((C1>C2)?C1:C2).Print(); //日期大的输出，在代码C1>C2中，会自动把C1和C2转换为整数进行比较

}

return 0;

}

