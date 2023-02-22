#include <stdio.h>
int zs(int x) {
  int j;
  for (j = 2; j * j <= x; j++)  //判定是不是质数
  {
    if (x % j == 0) return 0;
  }
  //如果j经历了完整的循环那么它就是质数
  return 1;
}
int hws(int x)  //判断回文数
{
  int n = x, s = 0;
  while (n) {
    s = s * 10 + n % 10;
    n /= 10;
  }
  if (s == x)
    return 1;
  else
    return 0;
}
int main() {
  int a, b, ans[11110] = {0}, i = 0;
  scanf("%i %i", &a, &b);
  if (a % 2 == 0) a += 1;
  for (int k = a; k <= b; k += 2) {
    if(k==1000) k=10000;
    if(k==100000) k=1000000;
    if(k>=10000000) break;
    if (hws(k) == 1 ) {
      ans[i] = k;
      if(zs(ans[i])==1)
      printf("%i\n", ans[i]); 
      i++;
    }
  }
  return 0;
}