#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int current = 0, count = 0;
  while (current != n) {
    current += min(5, n - current);
    count++;
  }
  cout << count;
}
