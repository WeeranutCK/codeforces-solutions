#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums;
  string temp;
  while (getline(cin, temp, '+')) {
    nums.push_back(stoi(temp));
  }

  sort(nums.begin(), nums.end());
  bool isFirst = true;
  for (int i : nums) {
    if (isFirst) {
      isFirst = false;
    } else {
      cout << "+";
    }
    cout << i;
  }
}
