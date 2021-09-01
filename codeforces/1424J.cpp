/**
 *  winners never quit
**/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;

bool mark[N+1];
vector <int> p;

void make(){
  p.push_back(2);
  for (int i = 4;i <= N;i += 2)mark[i] = true;
  for (int i = 3;i <= N;i += 2){
    if (!mark[i]){
      p.push_back(i);
      if (i*i <= N){
        for (int j = i*i;j <= N;j += i+i){
          mark[j] = true;
        }
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tc, ca = 0;
  make();
  //cout << p.size() << '\n';
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    if (n <= 3){
      cout << n << '\n';
      continue;
    }
//    set <int> S;
//    for (int i = 2;i <= n;i += 2)S.insert(i);
//    for (int i = 1;i < p.size() && p[i]*p[i] <= n;i++){
//      S.insert(p[i]);
//      for (int j = p[i]*p[i];j <= n;j += p[i]+p[i]){
//        S.insert(j);
//      }
//    }
//    cout << n - S.size() << '\n';
    int ans = 0;
    vector <int> a;
    for (int i = 0;i < p.size() && p[i] <= n/2;i++){
      ans += n/p[i];
      a.push_back(p[i]);
    }
    if (a.size() > 1)ans -= a.size();
    cout << n-ans << '\n';
  }
  return 0;
}