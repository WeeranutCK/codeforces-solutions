#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  cin >> input;
  cout << (char)toupper(input[0]) << input.substr(1, input.length() - 1);
}
