#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int opinion;
    cin >> opinion;

    if (opinion) {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";
}
