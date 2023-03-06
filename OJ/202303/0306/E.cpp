#include <iostream>
using namespace std;
int main() {
  int a, b;
  int arr1[10010], arr2[10010];
  while (cin >> a) {
    for (int i = 0; i < a; ++i) cin >> arr1[i];
    cin >> b;
    for (int i = 0; i < b; ++i) cin >> arr2[i];
    if (a < 0) a = 0;
    if (b < 0) b = 0;
    if (a + b == 0) {
      cout << "0\n";
      return 0;
    }
    int* arr3 = new int[a + b];
    int i = 0, j = 0, k = 0;
    while (j < a && k < b) {
      if (*(arr1 + j) < *(arr2 + k)) {
        *(arr3 + i) = *(arr1 + j);
        ++i;
        ++j;
      } else {
        *(arr3 + i) = *(arr2 + k);
        ++i;
        ++k;
      }
    }
    while (j < a) {
      *(arr3 + i) = *(arr1 + j);
      ++i;
      ++j;
    }
    while (k < b) {
      *(arr3 + i) = *(arr2 + k);
      ++i;
      ++k;
    }
    cout << a + b << endl;
    for (int i = 0; i < a + b - 1; ++i) cout << arr3[i] << ' ';
    cout << arr3[a + b - 1] << endl;
    delete[] arr3;
    cout << endl;
  }
  return 0;
}