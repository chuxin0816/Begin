#include<stdio.h>
int main()
{
	char a[100], c, min1, min2, max;
	int i = 0, k, n = 0;
	while ((c = getchar()) != EOF)
/********** Write your code here! **********/
{
    n=0;
    for(k=0;k<i;k++)
    {
        if(c==a[k]) n=1;
    }
    if(n==0) {a[i]=c;i++;}
}
int tem;
for(int j=0;j<i;j++)
{
    for( k=0;k<i-j-1;k++)
    {
        if(a[k]>a[k+1])
        {tem=a[k];
        a[k]=a[k+1];
        a[k+1]=tem;}
    }
}
printf("%s",a);


/*******************************************/
	printf("\n");
	return 0;
}