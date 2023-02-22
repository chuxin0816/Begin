#include <stdio.h>
int main() {
  int array[10], sum = 0, flag = 0;
  float pj;
  for (int i = 0; i < 10; i++) scanf("%i", &array[i]);
  for (int i = 0; i < 10; i++) {
    sum += array[i];
  }
  pj = sum / 10.0;
  for (int i = 0; i < 10; i++) {
    if (array[i] > pj) flag++;
  }
  printf("%i", flag);
  return 0;
}