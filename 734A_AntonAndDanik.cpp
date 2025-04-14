#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string input;
  cin >> input;
  
  int antonWins = 0;
  int danikWins = 0;
  for (char c : input) {
    if (c == 'A') antonWins++;
    else if (c == 'D') danikWins++;
  }

  if (antonWins > danikWins) {
    cout << "Anton";
  } else if (danikWins > antonWins) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }
}
