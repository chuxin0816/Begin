#include <stdio.h>
int main() {
  int i, money = 0, sum = 0, spend;
  for (i = 1; i <= 12; i++) {
    money += 300;
    scanf("%i", &spend);
    money -= spend;
    if (money < 0) {
      printf("%i", -i);
      return 0;
    }
    if (money / 100 > 0) {
      sum = sum + money / 100 * 100;
      money = money - money / 100 * 100;
    }
  }
  printf("%.0f", money + sum * 1.2);
  return 0;
}