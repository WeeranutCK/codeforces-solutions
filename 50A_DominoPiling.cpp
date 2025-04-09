#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> board(m, vector<int>(n, 0));
  int count = 0;

  // place horizontally
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (board[i][j] != 1 && board[i][j + 1] != 1) {
        board[i][j] = 1;
        board[i][j + 1] = 1;
        count++;
        j++;
      }
    }
  }

  // place vertically
  for (int i = 0; i < m - 1; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] != 1 && board[i + 1][j] != 1) {
        board[i][j] = 1;
        board[i + 1][j] = 1;
        count++;
        i++;
      }
    }
  }

  cout << count;
}
