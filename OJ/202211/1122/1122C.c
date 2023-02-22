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
  int array[10];
  for (int i = 0; i < 10; i++) scanf("%i", &array[i]);
  if (array[0] > array[1]) {
    jx_bubble_sort(array, 10);
  } else
    sx_bubble_sort(array, 10);
  for (int i = 0; i < 10; i++) printf("%i\n", array[i]);
  return 0;
}