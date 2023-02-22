#include <stdio.h>
#include <string.h>
int main() {
  char s1[10086], s2[10086];
  int a[10086] = {0}, b[10086] = {0};
  int l1, l2, l3, i, flag;
  scanf("%s\n%s", s1, s2);
  l1 = strlen(s1), l2 = strlen(s2);
  l3 = l1 > l2 ? l1 : l2;
  if (l1 > l2 || (strcmp(s1, s2) >= 0 && l1 == l2)) {
    flag = 0;
    for (i = 0; i < l1; i++) a[i] = s1[l1 - 1 - i] - '0';
    for (i = 0; i < l2; i++) b[i] = s2[l2 - 1 - i] - '0';
  } else {
    flag = 1;
    for (i = 0; i < l2; i++) a[i] = s2[l2 - 1 - i] - '0';
    for (i = 0; i < l1; i++) b[i] = s1[l1 - 1 - i] - '0';
  }
  for (i = 0; i < l3; i++) {
    a[i] -= b[i];
    if (a[i] < 0) {
      a[i + 1] -= 1;
      a[i] += 10;
    }
  }
  while (a[l3 - 1] == 0 && l3 > 1) l3--;
  if (flag == 1) printf("-");
  for (i = l3 - 1; i >= 0; i--) printf("%i", a[i]);
  return 0;
}