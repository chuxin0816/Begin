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
void Insert(Node* H, int pos, int data) {
  if (1 <= pos && pos <= H->data + 1) {
    auto temp = H;
    for (int i = 1; i < pos; ++i) {
      temp = temp->next;
    }
    temp->next = new Node{data, temp->next};
    H->data++;
    for (auto p = H->next; p; p = p->next) {
      cout << p->data;
      if (p->next)
        cout << ' ';
      else
        cout << '\n';
    }
  } else
    cout << "error\n";
}
int main() {
  int n;
  cin >> n;
  while (n--) {
    int i, e;
    cin >> i >> e;
    Insert(&H, i, e);
  }
  auto p1 = H.next;
  while (p1) {
    auto q = p1->next;
    delete p1;
    p1 = q;
  }
  return 0;
}