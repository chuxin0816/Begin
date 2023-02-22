#include <stdio.h>
void sx_bubble_sort(int arr[], int len) {
  int i, j, temp;
  for (i = 0; i < len - 1; i++)
    for (j = 0; j < len - 1 - i; j++)
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
}
void jx_bubble_sort(int arr[], int len) {
  int i, j, temp;
  for (i = 0; i < len - 1; i++)
    for (j = 0; j < len - 1 - i; j++)
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
}
int main() {
  int n, a, ans[11], temp, j, m;
  scanf("%i", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) scanf("%i", &ans[j]);
    scanf("%i", &a);
    int flag = 0;
    for (j = 0; j < 10; j++) {
      if (ans[j] == a) {
        temp = ans[j];
        flag++;
        break;
      }
    }
    if (a % 2 != 0 && flag != 0) {
      sx_bubble_sort(ans, 10);
      for (j = 0; j < 10; j++) {
        if (ans[j] == temp) temp = j;
      }
      if (temp == 9) {
        for (j = 0; j < 8; j++) {
          printf("%i ", ans[j]);
        }
        printf("%i\n", ans[8]);
      } else {
        for (j = 0; j < 9; j++) {
          if (j == temp) continue;
          printf("%i ", ans[j]);
        }
        printf("%i\n", ans[9]);
      }
    } else if (a % 2 == 0 && flag == 0) {
      ans[10] = a;
      jx_bubble_sort(ans, 11);
      for (j = 0; j < 10; j++) printf("%i ", ans[j]);
      printf("%i\n", ans[j]);
    } else {
      int lj = 0, lo = 0;
      for (int j = 0; j < 10; j++) {
        if (ans[j] % 2 == 0)
          lo++;
        else
          lj++;
      }
      int ji[lj], ou[lo];
      j = 0, m = 0;
      while (m < lj) {
        if (ans[j] % 2 != 0) {
          ji[m] = ans[j];
          m++;
        }
        j++;
      }
      int j = 0, m = 0;
      while (m < lo) {
        if (ans[j] % 2 == 0) {
          ou[m] = ans[j];
          m++;
        }
        j++;
      }
      jx_bubble_sort(ji, lj);
      jx_bubble_sort(ou, lo);
      for (j = 0; j < lj; j++) printf("%i ", ji[j]);
      for (j = 0; j < lo - 1; j++) printf("%i ", ou[j]);
      printf("%i\n", ou[j]);
    }
  }
  return 0;
}