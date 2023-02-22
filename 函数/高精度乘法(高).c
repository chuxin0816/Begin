#include <stdio.h>
#include <string.h>
int main() {
  char s1[2000], s2[2000];
  int a[2000] = {0}, b[2000] = {0}, c[4000] = {0};
  int l1, l2, l3, i, j;
  scanf("%s\n%s", s1, s2);
  l1 = strlen(s1), l2 = strlen(s2);
  l3 = l1 + l2 - 1;
  for (i = 0; i < l1; i++) a[i] = s1[l1 - 1 - i] - '0';
  for (i = 0; i < l2; i++) b[i] = s2[l2 - 1 - i] - '0';
  for (i = 0; i < l1; i++)
    for (j = 0; j < l2; j++) c[i + j] += a[i] * b[j];
  for (i = 0; i < l3; i++) {
    c[i + 1] += c[i] / 10;
    c[i] %= 10;
  }
  if (c[l3] > 0) l3++;
  while (c[l3 - 1] >= 10) {
    c[l3] = c[l3 - 1] / 10;
    c[l3] %= 10;
    l3++;
  }
  while (c[l3 - 1] == 0 && l3 > 1) l3--;
  for (i = l3 - 1; i >= 0; i--) printf("%i", c[i]);
  return 0;
}