#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string input;
  while (n-- && cin >> input) {
    if (input.length() > 10) {
      cout << input[0] << input.length() - 2 << input[input.length() - 1] << endl;
    } else {
      cout << input << endl;
    }
  }
}
