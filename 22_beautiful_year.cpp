#include <bits/stdc++.h>
using namespace std;

int main() {
  int y;
  cin >> y;

  for (int i = y + 1; i <= 9999; i++) {
    string s = to_string(i);
    set<char> st(s.begin(), s.end());

    if (st.size() == 4) {
      cout << i << endl;
      break;
    }
  }
}