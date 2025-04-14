#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.length() != t.length()) {
    cout << "NO";
    return 0;
  }

  int wordLength = s.length();
  for (int i = 0; i < wordLength; i++) {
    if (s[i] == t[wordLength - 1 - i]) continue;
    cout << "NO";
    return 0;
  }
  cout << "YES";
}
