#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  string line;
  cin >> line;

  int i = 0;
  bool isSwap = false;
  while (t) {
    if (line[i] == 'B' && line[i + 1] == 'G') {
      line[i] = 'G';
      line[i + 1] = 'B';
      isSwap = true;
      i++;
    }

    if (i + 1 >= n) {
      i = 0;
      t--;
      if (!isSwap) break;
      isSwap = false;
    }
    else i++;
  }

  cout << line;
}
