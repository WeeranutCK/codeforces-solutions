#include <bits/stdc++.h>

using namespace std;

int main() {
  string name;
  cin >> name;

  set<char> characters;
  for (char c : name) {
    characters.insert(c);
  }

  if (characters.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}
