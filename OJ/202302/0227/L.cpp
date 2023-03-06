#include <iostream>
using namespace std;
int arr[3][3];
void zhuanzhi(int arr[3][3]) {
  int arr2[3][3];
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      arr2[i][j] = arr[i][j];
    }
  }
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      arr[i][j] = arr2[j][i];
    }
  }
}
int main() {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) cin >> arr[i][j];
  }
  zhuanzhi(arr);
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}