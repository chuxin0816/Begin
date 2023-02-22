#include <stdio.h>
#include <math.h>
float dis(float x1,float y1,float x2,float y2);
int main(){
    float x1,x2,x3,y1,y2,y3;
    scanf("%f %f\n%f %f\n%f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("%.2f",dis(x1,y1,x2,y2)+dis(x1,y1,x3,y3)+dis(x2,y2,x3,y3));
}
float dis(float x1,float y1,float x2,float y2)
{
    float(dis)=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return dis;
}