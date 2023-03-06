#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char type;
        int size;
        cin>>type>>size;
        switch (type)
        {
        case ('I'):{
            int* arr=new int[size];
            for(int i=0;i<size;++i) cin>>*(arr+i);
            int val=0;
            for(int i=0;i<size;++i) val+=*(arr+i);
            cout<<val/(double)size<<endl;
            break;
        }
        case('C'):{
            char* arr=new char[size];
            for(int i=0;i<size;++i) cin>>*(arr+i);
            char max=*arr;
            for(int i=1;i<size;++i) {
                if(*(arr+i)>max) max=*(arr+i);
            }
            cout<<max<<endl;
            break;
        }
        case('F'):{
            float* arr=new float[size];
            for(int i=0;i<size;++i) cin>>*(arr+i);
            float min=*arr;
            for(int i=1;i<size;++i) {
                if(*(arr+i)<min) min=*(arr+i);
            }
            cout<<min<<endl;
            break;
        }
        default:
            break;
        }
    }
}
