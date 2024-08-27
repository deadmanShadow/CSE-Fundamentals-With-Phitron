#include <bits/stdc++.h>
using namespace std;
int main() {
  map<string, int> mp;
  //   mp.insert({"shamil", 98});
  //   mp.insert({"rakib", 67});
  //   mp.insert({"sayed", 25});
  //   mp.insert({"mohammad", 44});
  //   mp.insert({"arif", 15});
  //   mp.insert({"akib", 0});

  mp["shamim"] = 45;
  mp["arif"] = 14;
  mp["rokib"] = 27;
  mp["sayed"] = 66;

  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }  // O(logN)
  //   if (mp.count("akib"))
  //     cout << "Yes" << endl;
  //   else
  //     cout << "No" << endl;
  return 0;
}