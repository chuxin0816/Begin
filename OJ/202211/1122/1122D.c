#include <stdio.h>
int main() {
  int array[10], n, i, j, a, flag, temp;
  scanf("%i", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < 10; j++) scanf("%i", &array[j]);
    scanf("%i", &a);
    flag = 0;
    for (j = 0; j < 10; j++) {
      if (array[j] == a) {
        temp = j;
        flag++;
        break;
      }
    }
    if (flag == 0)
      printf("Not found\n");
    else {
      if (temp == 9) {
        for (j = 0; j < 8; j++) {
          printf("%i ", array[j]);
        }
        printf("%i\n", array[8]);
      } else {
        for (j = 0; j < 9; j++) {
          if (j == temp) j++;
          printf("%i ", array[j]);
        }
        printf("%i\n", array[9]);
      }
    }
  }
  return 0;
}