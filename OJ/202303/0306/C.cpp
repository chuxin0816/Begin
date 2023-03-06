#include <iostream>
#include <string>
using namespace std;
int main() {
  string str[12] = {"January",   "February", "March",    "April",
                    "May",       "June",     "July",     "August",
                    "September", "October",  "November", "December"};
  string *a[12];
  for (int i = 0; i < 12; ++i) a[i] = &str[i];
  int t, num;
  cin >> t;
  while (t--) {
    cin >> num;
    if (0 < num && num < 13)
      cout << *a[num - 1] << endl;
    else
      cout << "error\n";
  }
}