#include <stdio.h>
int main()
{
    int n,s=1,sum=0;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        s*=i;
        sum+=s;
    }
    printf("%i",sum);
    return 0;
}