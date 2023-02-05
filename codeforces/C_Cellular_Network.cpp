#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> n(a);
  vector<int> m(b);

  for (int i = 0; i < a; ++i)
    cin >> n[i];
  for (int i = 0; i < b; ++i)
    cin >> m[i];
  int mP = 0;
  int nP = 0;
  int r = 0;
  while (true) {
    if ((nP > a - 1)) {
      break;
    }

    while ((mP <= b - 2) && abs(m[mP] - n[nP]) >= abs(m[mP + 1] - n[nP])) {
      mP++;
    }
    r = max(r, abs(m[mP] - n[nP]));
    nP += 1;
  }
  cout << r << endl;
}