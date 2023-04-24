#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node* next;
  Node* pr;
};
int main() {
  int n, k, m;
  for (int i = 0; i < 2; ++i) {
    cin >> n >> k >> m;
    Node** nodes = new Node*[n + 1];
    for (int i = 0; i <= n; i++) {
      nodes[i] = new Node();
    }

    nodes[0]->data = n;
    for (int j = 2; j < n; ++j) {
      nodes[j]->data = j;
      nodes[j]->next = nodes[j + 1];
      nodes[j]->pr = nodes[j - 1];
    }
    nodes[1]->data = 1;
    nodes[1]->next = nodes[2];
    nodes[1]->pr = nodes[n];
    nodes[n]->data = n;
    nodes[n]->next = nodes[1];
    nodes[n]->pr = nodes[n - 1];
    auto p = nodes[k];
    while (nodes[0]->data) {
      for (int i = 1; i < m; ++i) {
        p = p->next;
      }
      nodes[0]->data--;
      cout << p->data;
      if (nodes[0]->data)
        cout << ' ';
      else
        cout << '\n';
      p->pr->next = p->next;
      p->next->pr = p->pr;
      p = p->next;
    }
    for (int i = 0; i <= n; i++) {
      delete nodes[i];
    }
    delete[] nodes;
  }
  return 0;
}