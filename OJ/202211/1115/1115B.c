#include <stdio.h>
int zs(int x) {
  int j;
  if(x<2) return 0;
  for (j = 2; j * j <= x; j++) {
    if (x % j == 0) {
      return 0;
    }
  }
  if (j * j > x)
    return 1;
  else
    return 0;
}
int main() {
  int t, n, m, flag = 0, sum = 0;
  scanf("%i", &t);
  for (int i = 0; i < t; i++,sum=0,flag=0) {
    scanf("%i %i", &n, &m);
    for (int k=n; k <= m; k++) {
      if (zs(k)) {
        printf("%i ", k);
        flag++;
        sum += k;
      }
    }
      if (flag == 0)
        printf("NO\n");
      else {
        printf("\n");
        printf("%i\n", sum);
      }
  }
  return 0;
}