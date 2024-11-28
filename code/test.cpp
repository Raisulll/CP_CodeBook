#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INFI = 1e18;
const ll MOD = 1e9+7;
int cntOnes(int n)
{
  int cnt = 0;
  for (int i = 1; i <= n; i <<= 1)
  {
    int x = (n + 1) / (i << 1);
    cnt += x * i;
    if ((n + 1) % i && n & i)
      cnt += (n + 1) % i;
  }
  return cnt;
}
int main()
{
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  ll n; cin >> n;
  cout << cntOnes(n) << "\n";
  return 0;
}