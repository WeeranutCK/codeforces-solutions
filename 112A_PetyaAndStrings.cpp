#include <bits/stdc++.h>

using namespace std;

void toLower(string& str) {
  for (char& c: str) {
    c = tolower(c);
  }
}

int main() {
  string a, b;
  cin >> a >> b;
  
  toLower(a);
  toLower(b);

  if (a < b) cout << -1;
  else if (a > b) cout << 1;
  else cout << 0;
}
