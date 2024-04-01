#include <bits/stdc++.h>

using namespace std;

unsigned int  countWays(int n, int s, int e) {
  unsigned int dp[n+1];
  for (int i = 0; i <= n; i++) {
    dp[i] = 0;
  }
  dp[s] = 1;
  for (int i = s+1; i <= e; i++) {
    for (int j = i-1; j >= i-3; j--) {
      if (j >= s && j <= e) {
        dp[i] += dp[j];
      }
    }
  }
  return dp[e];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int n;
  cin >> n;
  int s[n] , e[n] ;
  for(int i = 0 ; i < n ; i++) {  
    cin >> s[i] ; cin >> e[i] ;
  }
  for(int i = 0 ; i < n ; i++) {  
    cout << countWays( 1000 ,s[i] , e[i]) << endl;
  }
}
