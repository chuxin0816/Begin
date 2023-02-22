#include <math.h>
#include <stdio.h>
int n, array[1024][1024];
void sm(int x, int y, int n)  //赦免函数
{
  if (n == 1) {
    array[x][y + 1] = array[x + 1][y] = array[x + 1][y + 1] = 1;
    return;
  }
  int X = x + pow(2, n - 1), Y = y + pow(2, n - 1);
  sm(X, y, n - 1), sm(x, Y, n - 1), sm(X, Y, n - 1);
}
int main() {
  scanf("%i", &n);
  sm(0, 0, n);
  for (int j = 0; j < pow(2, n); j++)  //输出
  {
    for (int k = 0; k < pow(2, n); k++) {
      printf("%i ", array[j][k]);
    }
    printf("\n");
  }
}
