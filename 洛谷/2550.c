#include <stdio.h>
#include <string.h>
int main() {
  int n, array[7], te = 0, yi = 0, er = 0, san = 0, si = 0, wu = 0, liu = 0,
                   sum, temp[7];
  scanf("%i", &n);
  scanf("%i %i %i %i %i %i %i", &array[0], &array[1], &array[2], &array[3], &array[4],
        &array[5], &array[6]);
  for (int i = 0; i < n; i++) {
    sum = 0;
    memset(temp,0,sizeof(temp));
    scanf("%i %i %i %i %i %i %i", &temp[0], &temp[1], &temp[2], &temp[3], &temp[4],
          &temp[5], &temp[6]);
    for (int j = 0; j < 7; j++) {
      for (int k = 0; k < 7; k++) {
        if (temp[k] == array[j]) sum++;
      }
    }
    switch (sum) {
      case 0:
        break;
      case 1:
        liu++;
        break;
      case 2:
        wu++;
        break;
      case 3:
        si++;
        break;
      case 4:
        san++;
        break;
      case 5:
        er++;
        break;
      case 6:
        yi++;
        break;
      case 7:
        te++;
        break;
    }
  }
  printf("%i %i %i %i %i %i %i", te, yi, er, san, si, wu, liu);
  return 0;
}