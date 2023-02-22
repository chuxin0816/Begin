#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b) { return a > b; }
int circle(int num) {
  int a = num / 1000;
  int b = num / 100 % 10;
  int c = num / 10 % 10;
  int d = num % 10;
  int array1[4] = {a, b, c, d}, array2[4] = {a, b, c, d};
  sort(array1, array1 + 4);
  sort(array2, array2 + 4, comp);
  return (array2[0] * 1000 + array2[1] * 100 + array2[2] * 10 + array2[3]) -
         (array1[0] * 1000 + array1[1] * 100 + array1[2] * 10 + array1[3]);
}
int main() {
  int n;
  cin >> n;
  while (n--) {
    int num, temp, t = 0;
    cin >> num;
    while (1) {
      temp = circle(num);
      t++;
      if (temp == num) break;
      num = temp;
    }
    cout << t << endl;
  }
  return 0;
}
