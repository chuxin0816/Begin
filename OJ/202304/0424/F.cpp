#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node* next;
};
Node* Reverse(Node* H) {
  Node* pr = nullptr;
  Node* cur = H;
  while (cur) {
    Node* next = cur->next;
    cur->next = pr;
    pr = cur;
    cur = next;
  }
  return pr;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) {
      int val;
      cin >> val;
      Node* node = new Node{val, nullptr};
      if (head == nullptr) {
        head = node;
        tail = node;
      } else {
        tail->next = node;
        tail = node;
      }
    }
    for (auto p = Reverse(head); p; p = p->next) {
      cout << p->data << ' ';
    }
    cout << endl;
    auto p1 = head;
    while (p1) {
      auto q = p1->next;
      delete p1;
      p1 = q;
    }
  }
  cout << endl;
  return 0;
}