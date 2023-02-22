#include <stdio.h>
int main() {
  int t, a, b, a1, a2, b1, max, min, cnt;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i %i", &a, &b);
    int array[a][b];
    for (int j = 0; j < a; j++) {
      for (int k = 0; k < b; k++) scanf("%i", &array[j][k]);
    }
    cnt = 0;
    for (int j = 0; j < a; j++) {
      max = array[j][0];
      a1 = 0, b1 = 0;
      for (int k = 0; k < b; k++) {
        if (array[j][k] > max) {
          max = array[j][k];
          a1 = j, b1 = k;
        }
        min = array[0][b1];
        a2 = 0;
        for (int m = 0; m < a; m++) {
          if (array[m][b1] < min) {
            min = array[m][b1];
            a2 = m;
          }
        }
      }
      if (a1 == a2) {
        printf("%i %i\n", a1, b1);
        cnt++;
        break;
      }
    }
    if (cnt == 0) printf("-1\n");
  }
  return 0;
}