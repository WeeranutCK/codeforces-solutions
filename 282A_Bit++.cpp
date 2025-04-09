#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int v = 0;
  string input;
  while (n-- && cin >> input) {
    if (input == "++X" || input == "X++") {
      v++;
    } else {
      v--;
    }
  }
  cout << v;
}
