#include <bits/stdc++.h>
using namespace std;
class cat {
 private:
  char name[100];
  int weight;

 public:
  void get() { cin >> name >> weight; }
  int get_weight() { return weight; }
  char* get_name() { return name; }
};
bool cmp(cat a, cat b) { return (a.get_weight() < b.get_weight()); }
int main() {
  int n;
  cin >> n;
  cat* cats = new cat[n];
  for (int i = 0; i < n; ++i) cats[i].get();
  sort(cats, cats + n, cmp);
  for (int i = 0; i < n; ++i)
    printf("%s%c", cats[i].get_name(), i == n - 1 ? '\n' : ' ');
  delete[] cats;
  return 0;
}