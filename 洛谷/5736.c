#include <stdio.h>
int zs(int x);
int main() {
  int n, array[100];
  scanf("%i", &n);
  for (int i = 0; i < n; i++) {
    scanf("%i", &array[i]);
  }
  for (int i = 0; i < n; i++) {
    if (zs(array[i]) == 1) printf("%i ", array[i]);
  }
}

int zs(int x) {
  int a;
  for (a = 2; a <= x; a++) {
    if (x % a == 0) break;
  }
  if (a == x)
    return 1;
  else
    return 0;
}