#include <stdio.h>
int main() {
  int n, na, nb, suma = 0, sumb = 0, j, k, i;
  scanf("%i %i %i", &n, &na, &nb);
  int a[na], b[nb];
  for (i = 0; i < na; i++) scanf("%i", &a[i]);
  for (i = 0; i < nb; i++) scanf("%i", &b[i]);
  for (i = 0; i < n; i++) {
    j = k = i;
    while (j >= na) j -= na;
    while (k >= nb) k -= nb;
    if (a[j] != b[k]) {
      if (a[j] == 0) {
        if (b[k] == 1)
          sumb++;
        else if (b[k] == 2)
          suma++;
        else if (b[k] == 3)
          suma++;
        else if (b[k] == 4)
          sumb++;
      } else if (a[j] == 1) {
        if (b[k] == 0)
          suma++;
        else if (b[k] == 2)
          sumb++;
        else if (b[k] == 3)
          suma++;
        else if (b[k] == 4)
          sumb++;
      } else if (a[j] == 2) {
        if (b[k] == 0)
          sumb++;
        else if (b[k] == 1)
          suma++;
        else if (b[k] == 3)
          sumb++;
        else if (b[k] == 4)
          suma++;
      } else if (a[j] == 3) {
        if (b[k] == 0)
          sumb++;
        else if (b[k] == 1)
          sumb++;
        else if (b[k] == 2)
          suma++;
        else if (b[k] == 4)
          suma++;
      } else if (a[j] == 4) {
        if (b[k] == 0)
          suma++;
        else if (b[k] == 1)
          suma++;
        else if (b[k] == 2)
          sumb++;
        else if (b[k] == 3)
          sumb++;
      }
    }
  }
  printf("%i %i", suma, sumb);
  return 0;
}