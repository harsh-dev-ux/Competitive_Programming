#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  int a[50];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int kscore = a[k - 1];
  int ctr = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= kscore && a[i] > 0) {
      ctr++;
      
    }
  }
  cout << ctr << endl;
}
