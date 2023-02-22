#include <stdio.h>
int main() {
  int array[10], a, t, i, j;
  scanf("%i", &t);
  for (i = 0; i < t; i++) {
    for (j = 0; j < 10; j++) scanf("%i", &array[j]);
    scanf("%i", &a);
    int flag = 0;
    for (j = 0; j < 10; j++) {
      if (array[j] == a) {
        printf("%i\n", j);
        flag++;
        break;
      }
    }
    if (flag == 0) {
      printf("Not found\n");
    }
  }
  return 0;
}