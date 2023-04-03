#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//填空实现类STU的定义
/********** Write your code here! **********/
class STU{
    private:
    string name;
    public:
    STU(string a):name(a){
        cout<<"Construct student "<<name<<endl;
    }
    STU(const STU& a){
        name=a.name+"_copy";
        cout<<"Construct student "<<name<<endl;
    }
    ~STU(){
        cout<<"Destruct student"<<name<<endl;
    }
};
/*******************************************/
//其他代码如下
int IDs; //全局变量，用于输出结果提示
class Tutor {
private:
	STU stu;
public:
	Tutor(STU & s): stu(s)
	{	cout<<"Construct tutor "<<IDs<<endl;	}
	~Tutor()
	{	cout<<"Destruct tutor "<<IDs<<endl;	}

};
void fuc(Tutor x)
{	cout<<"In function fuc()"<<endl;	}

int main()
{	cin>>IDs;
	STU s1("Tom"); //输入学生姓名Tom
	Tutor t1(s1);
	IDs++;
	cout<<"Calling fuc()"<<endl;
	fuc(t1);

	return 0;
}