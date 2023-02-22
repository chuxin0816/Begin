#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,a;
  scanf("%i", &n);
  for (int i = n; i >= 0; i--) {scanf("%i", &a);
  if(n==0&&a==0) {printf("0");break;}
  if(a==0) n--;
  else{
    if(i!=n&&a>0) printf("+");
    if(a<0) printf("-");
    if(abs(a)!=1||i==0) printf("%i",abs(a));
    if(i!=0) printf("x");
    if(i>1) printf("^%i",i);
  }
  }
  return 0;
}