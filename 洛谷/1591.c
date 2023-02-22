#include <stdio.h>
int main() {
  int t, a, n, sum[3005] = {0}, m,jw=0,wei=1;
  long long k = 0;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i %i", &n, &a);
    sum[0] = 1, k = 0;
    for (int j = 2; j <= n; j++) {
      for (m = 0; m < wei; m++) {
        jw=0;
        sum[m] = sum[m]*j+jw;
        jw=sum[m]/10;
        sum[m]%=10;
      }
      while (jw>0)
      {
        wei++;
        sum[j]=jw%10;
        jw/=10;
        j++;
      }
      
    }
    for (m=wei-1;m >= 0; m--) {
      if (sum[m] == a) k++;
    }
    printf("%lli\n", k);
  }
  return 0;
}