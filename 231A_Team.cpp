#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 0;
  while (n--) {
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    if (i + j + k >= 2) {
      count++;
    }
  }
  cout << count;
}
