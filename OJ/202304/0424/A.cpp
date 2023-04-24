#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node* next;
};
Node H{0, nullptr};
Node* Find(Node* H, int i) {
  if (1 <= i && i <= H->data) {
    Node* temp = H;
    for (int j = 0; j < i; ++j) temp = temp->next;
    return temp;
  } else
    return nullptr;
}
int main() {
  int m;
  cin >> H.data;
  auto p = &H;
  for (int i = 0; i < H.data; ++i) {
    int val;
    cin >> val;
    p->next = new Node{val, nullptr};
    p = p->next;
  }
  for (auto p = &H; p; p = p->next) cout << p->data << ' ';
  cout << endl;
  cin >> m;
  while (m--) {
    int pos;
    cin >> pos;
    auto Node = Find(&H, pos);
    if (Node)
      cout << Node->data << endl;
    else
      cout << "error\n";
  }
  cout << endl << endl;
    auto p1 = H.next;
    while (p1) {
      auto q = p1->next;
      delete p1;
      p1 = q;
    }
  return 0;
}