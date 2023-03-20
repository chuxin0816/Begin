#include <bits/stdc++.h>
using namespace std;
struct studentdate {
  string name;
  string xuehao;
  int grade1, grade2, grade3, total;
};
studentdate students[11];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> students[i].xuehao >> students[i].name >> students[i].grade1 >>
        students[i].grade2 >> students[i].grade3;
    students[i].total =
        students[i].grade1 + students[i].grade2 + students[i].grade3;
  }
  int maxindex = 0;
  for (int i = 0; i < n; ++i) {
    if (students[i].total > students[maxindex].total) maxindex = i;
  }
  cout << students[maxindex].name << ' ' << students[maxindex].xuehao << ' '
       << students[maxindex].total << endl;
  return 0;
}