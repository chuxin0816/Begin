#include<stdio.h>
int main()
{
	int min, len1, len2, len, a[100], b[100], tmp, i, j;
	scanf("%d", &len1);
	for (i = 0; i<len1; i++)
		scanf("%d", &a[i]);
	scanf("%d", &len2);
	for (i = 0; i<len2; i++)
		scanf("%d", &b[i]);

    len=len1+len2;
    for(i=len2;i<len;i++) b[i]=a[i-len2];
    for (i = 0; i < len - 1; i++){
    for (j = 0; j < len - 1 - i; j++)
      if (b[j] > b[j + 1]) {
        tmp = b[j];
        b[j] = b[j + 1];
        b[j + 1] = tmp;
      }
    }
    
	for (i = 0; i<len; i++)
		printf("%d ", b[i]);
	return 0;
}