#include <stdio.h>
int main() {
  char ans[11][11];
  int t = 0, f = 1, c = 1, j, k, x1, x2, y1, y2, szu, array[300000] = {0};
  for (j = 0; j < 10; j++) {
    scanf("%s", ans[j]);
  }
  for (j = 0; j < 10; j++) {
    for (k = 0; k < 10; k++) {
      if (ans[j][k] == 'F') x1 = j, y1 = k;
      if (ans[j][k] == 'C') x2 = j, y2 = k;
    }
  }
  szu = x1 + y1 * 10 + x2 * 100 + y2 * 1000 + f * 10000 + c * 50000;
  array[szu] = 1;
  while ((x1 != x2) || (y1 != y2)) {
    if (f == 1 && ans[x1 - 1][y1] != '*' && x1 > 0)
      x1--;
    else if (f == 2 && ans[x1][y1 + 1] != '*' && y1 < 9)
      y1++;
    else if (f == 3 && ans[x1 + 1][y1] != '*' && x1 < 9)
      x1++;
    else if (f == 4 && ans[x1][y1 - 1] != '*' && y1 > 0)
      y1--;
    else {
      f++;
      if (f > 4) f -= 4;
    }
    if (c == 1 && ans[x2 - 1][y2] != '*' && x2 > 0)
      x2--;
    else if (c == 2 && ans[x2][y2 + 1] != '*' && y2 < 9)
      y2++;
    else if (c == 3 && ans[x2 + 1][y2] != '*' && x2 < 9)
      x2++;
    else if (c == 4 && ans[x2][y2 - 1] != '*' && y2 > 0)
      y2--;
    else {
      c++;
      if (c > 4) c -= 4;
    }
    t++;
    szu = x1 + y1 * 10 + x2 * 100 + y2 * 1000 + f * 10000 + c * 50000;
    if (array[szu] == 1) {
      printf("0");
      return 0;
    }
    array[szu] = 1;
  }
  printf("%i", t);
  return 0;
}