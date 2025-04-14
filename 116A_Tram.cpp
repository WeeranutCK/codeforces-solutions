#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int capacity = 0;
  int totalPassengers = 0;
  for (int i = 0; i < n; i++) {
    int exit, enter;
    cin >> exit >> enter;

    totalPassengers -= exit;
    totalPassengers += enter;
    capacity = max(totalPassengers, capacity);
  }

  cout << capacity;
}
