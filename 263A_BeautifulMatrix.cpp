#include <bits/stdc++.h>

using namespace std;

int main() {
  int targetR, targetC;;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int temp;
      cin >> temp;
      if (temp) {
        targetR = i;
        targetC = j;
        break;
      }
    }
  }

  cout << (int)abs(targetR - 2) + (int)abs(targetC - 2);
}
