#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b) { return a > b; }
class Word {
 public:
  string word;
  int cnt;
  Word(string a, int b) : word(a), cnt(b) {}
};
int main() {
  string a;
  vector<Word> words;
  int i, n = 0;
  while (1) {
    cin >> a;
    if (a == "0")
      break;
    else {
      for (i = 0; i < n; i++) {
        if (words[i].word == a) {
          words[i].cnt++;
          break;
        }
      }
      if (i == n) {
        words.push_back(Word(a, 1));
        n++;
      }
    }
  }
  for (i = 0; i < n; i++) {
    int max = 0;
    for (int j = 0; j < n; j++) {
      if (words[j].cnt > words[max].cnt) max = j;
    }
    cout << words[max].cnt << " " << words[max].word << endl;
    words.erase(words.begin() + max);
  }
}
