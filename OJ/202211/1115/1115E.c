#include <stdio.h>
int main() {
  int t, x1, x2, x3, x4, y1, y2, y3, y4;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    scanf("%i %i %i %i", &x3, &y3, &x4, &y4);
    if ((((x1 >= x3 && x1 <= x4) || (x2 >= x3 && x2 <= x4)) &&
         ((y1 >= y3 && y1 <= y4) || (y2 >= y3 && y2 <= y4))) ||
        (((x3 >= x1 && x3 <= x2) || (x4 >= x1 && x4 <= x2)) &&
         ((y3 >= y1 && y3 <= y2) || (y4 >= y1 && y4 <= y2))))
      printf("YES\n");
      else printf("NO\n");
  }
}