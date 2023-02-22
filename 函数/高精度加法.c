#include <stdio.h>
#include <string.h>
int main() {
  char s1[500], s2[500];
  int a[500] = {0}, b[500] = {0};
  int l1, l2, l3, i;
  scanf("%s\n%s", s1, s2);
  l1 = strlen(s1), l2 = strlen(s2);
  l3 = l1 >= l2 ? l1 : l2;
  for (i = 0; i < l1; i++) a[i] = s1[l1 - 1 - i] - '0';
  for (i = 0; i < l2; i++) b[i] = s2[l2 - 1 - i] - '0';
  for (i = 0; i < l3; i++) {
    a[i] += b[i];
    if (a[i] >= 10) {
      a[i + 1] += a[i] / 10;
      a[i] %= 10;
    }
  }
  if (a[l3] != 0) l3++;
  while (a[l3 - 1] == 0 && l3 > 1) l3--;
  for (i = l3 - 1; i >= 0; i--) printf("%i", a[i]);
  return 0;
}