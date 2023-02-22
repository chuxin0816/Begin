#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int len) {
  int i = len - 1;
  while (i > 0) {
    int leastindex = 0;
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        leastindex = j;
      }
    }
    i = leastindex;
  }
}