#include <stdio.h>
int main() {
  int ans[10];
  for (int i = 0; i < 10; i++) scanf("%i", &ans[i]);
  for (int i = 9; i >= 0; i--) printf("%i ", ans[i]);
}