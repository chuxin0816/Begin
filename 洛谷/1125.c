#include <stdio.h>
#include <string.h>
int my_strlen(char ch[]);
int main() {
  char ans[100];
  int i, maxn = 1, minn = 100, n, length, k = 0;
  scanf("%s", ans);
  length = my_strlen(ans);  //字符串的长度
  for (i = 0; i < length; i++) {
    char a = ans[i];
    k = 0;
    for (int m = 0; m < length; m++) {
      if (a == ans[m]) k++;
    }
    if (k > maxn) maxn = k;
    if (k < minn) minn = k;
  }
  n = maxn - minn;  //差值
  for (i = 2; i <= n; i++) {
    if ((n % i) == 0) break;
  }
  if (n == i)
    printf("Lucky Word\n");  //判断质数
  else {
    printf("No Answer\n");
    n = 0;
  }
  printf("%i\n", n);
  return 0;
}
int my_strlen(char ch[]) {  //求字符串长度函数
  int i = 0, num = 0;
  while (ch[i] != '\0') i++, num++;
  return num;
}