#include <bits/stdc++.h>

using namespace std;

bool isDistinct(int number) {
  string numberStr = to_string(number);
  set<char> numbers;
  for (char c: numberStr) {
    numbers.insert(c);
  }
  return numberStr.length() == numbers.size();
}

int main() {
  int year;
  cin >> year;

  while (!isDistinct(++year));
  cout << year;
}
