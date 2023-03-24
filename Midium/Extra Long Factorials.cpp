/*
大數階乘算法，1<=n<=100。
Note: Factorials of n>20 can't be stored even in a 64bits long long variable
*/
#include <bits/stdc++.h>
using namespace std;

void extraLongFactorials(int n) {
  int ans[10000] = {0}, index = 1, temp, j;
  ans[0] = 1;

  for (int i = 2; i <= n; i++) {
    for (j = 0; j < index; j++) {
      ans[j] = ans[j] * i;
      // cout << "ans = " << ans[j] << endl;
    }

    for (j = 0; j < index; j++) {
      while (ans[j] >= 10) {
        if (j == index - 1) index++;
        // cout << "j/10 = " << ans[j] / 10 << endl;
        ans[j + 1] += ans[j] / 10;
        ans[j] = ans[j] % 10;
        j++;
        // for (int i = index - 1; i >= 0; i--) cout << ans[i] << ' ';
        //  cout << endl;
      }
    }
  }
  for (int i = index - 1; i >= 0; i--) cout << ans[i];
  cout << endl;
}
int main() {
  int n;
  cin >> n;
  extraLongFactorials(n);
}
