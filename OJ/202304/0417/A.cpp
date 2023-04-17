#include <bits/stdc++.h>
using namespace std;
class Custom {
 public:
  Custom(string name) : CustName(name) { CustID = ++TotalCustNum; }
  static void changeyear(int r) { Year = r; }
  void Display() {
    cout << CustName << ' ' << Year;
    if (CustID < 10)
      cout << "000";
    else if (CustID < 100)
      cout << "00";
    else if (CustID < 1000)
      cout << '0';
    cout << CustID << ' ' << TotalCustNum << ' ' << Rent * TotalCustNum << endl;
  }

 private:
  static int TotalCustNum;
  static int Rent;
  static int Year;
  int CustID;
  string CustName;
};
int Custom::TotalCustNum = 0;
int Custom::Rent = 150;
int Custom::Year = 2014;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string name;
    int year;
    cin >> year;
    while (1) {
      cin >> name;
      if (name == "0") break;
      Custom::changeyear(year);
      Custom cus(name);
      cus.Display();
    }
  }
  return 0;
}