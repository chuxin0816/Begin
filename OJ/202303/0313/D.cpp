#include <bits/stdc++.h>
using namespace std;
void find(int *num, int n, int &minIndex, int &maxIndex) {
  minIndex = maxIndex = 0;
  for (int i = 0; i < n; ++i) {
    if (num[i] > num[maxIndex]) maxIndex = i;
    if (num[i] < num[minIndex]) minIndex = i;
  }
}
int main() {
  int t, n, minIndex, maxIndex;
  cin >> t;
  while (t--) {
    cin >> n;
    int *nums = new int[n];
    for (int i = 0; i < n; ++i) cin >> nums[i];
    find(nums, n, minIndex, maxIndex);
    cout << "min=" << nums[minIndex] << " minindex=" << minIndex << endl;
    cout << "max=" << nums[maxIndex] << " maxindex=" << maxIndex << endl
         << endl;
    delete[] nums;
  }
  return 0;
}