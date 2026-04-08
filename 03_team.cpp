#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ctr = 0;

  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2) {
      ctr++;
    }
  }

  cout << ctr << endl;
}