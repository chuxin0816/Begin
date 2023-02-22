#include <stdio.h>
int main() {
  int a[10], b[10], sa = 0, sb = 0, i;
  for (i = 0; i < 10; i++) scanf("%i", &a[i]);
  for (i = 0; i < 10; i++) scanf("%i", &b[i]);
  for (i = 0; i < 10; i++) {
    if (a[i] > b[i]) sa++;
    if (b[i] > a[i]) sb++;
  }
  if (sa > sb)
    printf("a>b");
  else if (sa < sb)
    printf("a<b");
  else
    printf("a=b");
}