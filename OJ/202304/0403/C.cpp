#include <bits/stdc++.h>
using namespace std;
struct Term {
  int coef, exp;
  bool operator<(const Term& other) const { return exp < other.exp; }
};
class Polynomial {
 private:
  vector<Term> terms;

 public:
  Polynomial() {}
  Polynomial(const vector<Term>& t) : terms(t) {}
  void addTerm(int coef, int exp) {
    if (coef != 0) terms.push_back({coef, exp});
  }
  Polynomial Add(const Polynomial& other) {
    Polynomial result;
    int i = 0, j = 0;
    while (i < terms.size() && j < other.terms.size()) {
      if (terms[i].exp == other.terms[j].exp) {
        int coefSum = terms[i].coef + other.terms[j].coef;
        if (coefSum != 0) {
          result.addTerm(coefSum, terms[i].exp);
        }
        i++;
        j++;
      } else if (terms[i].exp < other.terms[j].exp) {
        result.addTerm(terms[i].coef, terms[i].exp);
        i++;
      } else {
        result.addTerm(other.terms[j].coef, other.terms[j].exp);
        j++;
      }
    }
    while (i < terms.size()) {
      result.addTerm(terms[i].coef, terms[i].exp);
      i++;
    }
    while (j < other.terms.size()) {
      result.addTerm(other.terms[j].coef, other.terms[j].exp);
      j++;
    }
    return result;
  }
  Polynomial Sub(const Polynomial& other) {
    Polynomial result;
    int i = 0, j = 0;
    while (i < terms.size() && j < other.terms.size()) {
      if (terms[i].exp == other.terms[j].exp) {
        int coefDiff = terms[i].coef - other.terms[j].coef;
        if (coefDiff != 0) {
          result.addTerm(coefDiff, terms[i].exp);
        }
        i++;
        j++;
      } else if (terms[i].exp < other.terms[j].exp) {
        result.addTerm(terms[i].coef, terms[i].exp);
        i++;
      } else {
        result.addTerm(-other.terms[j].coef, other.terms[j].exp);
        j++;
      }
    }
    while (i < terms.size()) {
      result.addTerm(terms[i].coef, terms[i].exp);
      i++;
    }
    while (j < other.terms.size()) {
      result.addTerm(-other.terms[j].coef, other.terms[j].exp);
      j++;
    }
    return result;
  }
  Polynomial Mul(const Polynomial& other) const {
    Polynomial result;
    for (int i = 0; i < terms.size(); i++) {
      for (int j = 0; j < other.terms.size(); j++) {
        int coefProd = terms[i].coef * other.terms[j].coef;
        int expSum = terms[i].exp + other.terms[j].exp;
        bool termExists = false;
        for (int k = 0; k < result.terms.size(); k++) {
          if (result.terms[k].exp == expSum) {
            result.terms[k].coef += coefProd;
            if (result.terms[k].coef == 0) {
              result.terms.erase(result.terms.begin() + k);
            }
            termExists = true;
            break;
          }
        }
        if (!termExists && coefProd != 0) {
          result.addTerm(coefProd, expSum);
        }
      }
      sort(result.terms.begin(), result.terms.end());
    }
    return result;
  }
  void print() {
    if (terms.empty()) {
      cout << 0 << endl;
      return;
    }
    for (int i = 0; i < terms.size(); i++) {
      if (terms[i].coef > 0 && i > 0) {
        cout << "+";
      }
      if (terms[i].coef == 1) {
        if (terms[i].exp == 0) {
          cout << 1;
        } else if (terms[i].exp == 1) {
          cout << "x";
        } else {
          cout << "x^" << terms[i].exp;
        }
      } else if (terms[i].coef == -1) {
        if (terms[i].exp == 0) {
          cout << -1;
        } else if (terms[i].exp == 1) {
          cout << "-x";
        } else {
          cout << "-x^" << terms[i].exp;
        }
      } else {
        cout << terms[i].coef;
        if (terms[i].exp == 1) {
          cout << "x";
        } else if (terms[i].exp > 1) {
          cout << "x^" << terms[i].exp;
        }
      }
    }
    cout << endl;
  }
};
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n;
    Polynomial p1;
    for (int i = 0; i < n; i++) {
      int coef, exp;
      cin >> coef >> exp;
      p1.addTerm(coef, exp);
    }
    cin >> m;
    Polynomial p2;
    for (int i = 0; i < m; i++) {
      int coef, exp;
      cin >> coef >> exp;
      p2.addTerm(coef, exp);
    }
    Polynomial sum = p1.Add(p2);
    Polynomial diff = p1.Sub(p2);
    Polynomial ji = p1.Mul(p2);
    sum.print();
    diff.print();
    ji.print();
  }
  return 0;
}
