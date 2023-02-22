#include <stdio.h>
int main() {
  int n;
  float a = 2, b = 1, sum = 0, temp;
  scanf("%i", &n);
  for (int i = 0; i < n; i++) {
    sum += a / b;
    temp = a;
    a = a + b;
    b = temp;
  }
  printf("%.2f", sum);
}