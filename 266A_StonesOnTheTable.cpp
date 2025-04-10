#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string colors;
  cin >> colors;

  int count = 0;
  char prev;
  for (char current: colors) {
    if (current == prev) {
      count++;
    } else {
      prev = current;
    }
  }

  cout << count;
}
