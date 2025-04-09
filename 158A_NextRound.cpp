#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> inputs(n);
  for (int i = 0; i < n; i++) {
    cin >> inputs[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (inputs[i] > 0 && inputs[i] >= inputs[k - 1]) {
      count++;
    }
  }
  
  cout << count;
}
