#include <bits/stdc++.h>

using namespace std;

void transformString(string &str, bool isUpper = true) {
  for (char &c : str) {
    if (isUpper) c = toupper(c);
    else c = tolower(c);
  }
}

int main() {
  string word;
  cin >> word;

  int upper = 0;
  int lower = 0;
  for (char c : word) {
    if (isupper(c)) upper++;
    else lower++;
  }

  transformString(word, upper > lower);
  cout << word;
}
