#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int groupd_size[N];
void dsu_init(int n) {
  for (int i = 0; i < n; i++) {
    par[i] = -1;
    groupd_size[i] = 1;
  }
}
int dsu_find(int node) {
  if (par[node] == -1) return node;
  int leader = dsu_find(par[node]);
  par[node] = leader;
  return leader;
}
void dsu_union(int n1, int n2) {
  int leaderA = dsu_find(n1);
  int leaderB = dsu_find(n2);
  par[leaderA] = leaderB;
}
void dsu_union_by_size(int n1, int n2) {
  int leaderA = dsu_find(n1);
  int leaderB = dsu_find(n2);
  if (groupd_size[leaderA] > groupd_size[leaderB]) {
    par[leaderB] = leaderA;
    groupd_size[leaderA] += groupd_size[leaderB];
  } else {
    par[leaderA] = leaderB;
    groupd_size[leaderB] += groupd_size[leaderA];
  }
}
int main() {
  dsu_init(7);
  dsu_union_by_size(1, 2);
  dsu_union_by_size(2, 3);
  dsu_union_by_size(4, 5);
  dsu_union_by_size(5, 6);
  cout << dsu_find(1) << endl;
  cout << dsu_find(4) << endl;
  return 0;
}