#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node *next;
};
void Insert(Node *H, int val) {
  auto p = H;
  while (p->next && val >= p->next->data) {
    p = p->next;
  }
  if (p && (val != p->data || p == H)) p->next = new Node{val, p->next};
}
int main() {
  int n;
  while (cin >> n) {
    Node *H = new Node();
    H->data = n;
    for (int j = 0; j < H->data; ++j) {
      int val;
      cin >> val;
      Insert(H, val);
    }
    for (auto p = H->next; p; p = p->next) {
      cout << p->data;
      if (p->next)
        cout << ' ';
      else
        cout << endl;
    }
    auto p1 = H;
    while (p1) {
      auto q = p1->next;
      delete p1;
      p1 = q;
    }
  }
  return 0;
}