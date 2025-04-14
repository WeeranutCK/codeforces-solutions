#include <bits/stdc++.h>

using namespace std;

int countLuckyDigits(string numberStr) {
  int count = 0;
  for (char c : numberStr) {
    if (c == '4' || c == '7') count++;
  }
  return count;
}

int main() {
  string number;
  cin >> number;

  int count = countLuckyDigits(number);
  string countStr = to_string(count);
  cout << (countLuckyDigits(countStr) == countStr.length() ? "YES" : "NO");
}
