#include <stdio.h>
int hws(int x) {
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
  int n;
  scanf("%i", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%i", &x);
    if (hws(x) == 1)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}