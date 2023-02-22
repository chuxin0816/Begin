#include <stdio.h>
int main() {
  int l, m, u, v, sum, tree = 0;
  scanf("%i%i", &l, &m);
  sum = l + 1;
  int array[10000] = {0};
  for (int i = 0; i < m; i++) {
    scanf("%i%i", &u, &v);
    for (int j = u; j <= v; j++) {
      array[j] = 1;
    }
  }
  for (int i = 0; i < sum; i++) {
    if (array[i] == 0) tree += 1;
  }
  printf("%i", tree);
  return 0;
}