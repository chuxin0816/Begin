#include<stdio.h>
int main()
{
	int max, min, i, a, t;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
    scanf("%i",&a);
    int ans[t];
    ans[i]=a;
    max=min=ans[0];
    if(ans[i]>max) max=ans[i];
    else if(ans[i]<min) min=ans[i];


    }
	printf("%d %d\n", max, min);
    return 0;
}