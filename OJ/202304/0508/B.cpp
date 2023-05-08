#include <bits/stdc++.h>
using namespace std;
class Document {
 public:
  string name;
  Document(string name) : name(name) { cout << "Create Document Class\n"; }
  ~Document() { cout << "Delete Document Class\n"; }
  virtual void Print() { cout << "Document Name is " << name << endl; }
};
class Book : public Document {
 public:
  int pageCount;
  Book(string name, int pageCount) : Document(name), pageCount(pageCount) {
    cout << "Create Book Class\n";
  }
  ~Book() { cout << "Delete Book Class\n"; }
  void Print() override {
    Document::Print();
    cout << "PageCount is " << pageCount << endl;
  }
};
int main() {
  string name;
  int page;
  cin >> name >> page;
  Book book(name, page);
  book.Print();
  return 0;
}