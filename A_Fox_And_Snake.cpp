#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define NO cout << "NO\n"
#define YES cout << "YES\n"
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for (auto &i : A) cin >> i
#define output(A) for (auto &i : A) cout << i << " "
const int MAXN = 1e6;
const int MOD = 1e9 + 7;
ll fac[MAXN + 1];
ll inv[MAXN + 1];
ll exp(ll x, ll n, ll m) {
    x %= m;
    ll res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = res * x % m;
        }
        x = x * x % m;
        n /= 2;
    }
    return res;
}
void factorial() {
    fac[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fac[i] = fac[i - 1] * i % MOD;
    }
}
void inverses() {
    inv[MAXN] = exp(fac[MAXN], MOD - 2, MOD);
    for (int i = MAXN; i >= 1; i--) {
        inv[i - 1] = inv[i] * i % MOD;
    }
}
ll choose(int n, int r) {
    return fac[n] * inv[r] % MOD * inv[n - r] % MOD;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial();
    inverses();
    int n,m;
    cin >> n >> m;
    vector<vector<char>> dp(n , vector<char>(m , 0));
   int flag=0;
    for(int i=0;i<n;i++){
      if(i%2==0){
        for(int j=0;j<m;j++){
          dp[i][j]='#';
        }
      }
      else{
        if(flag==0){
          for(int j=0;j<m-1;j++){
            dp[i][j]='.';
          }
          dp[i][m-1]='#';
          flag=1;
        }
        else{
          dp[i][0]='#';
          for(int j=1;j<m;j++){
            dp[i][j]='.';
          }
          flag=0;
        }
        
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout << dp[i][j];
      }
      cout << "\n";
    }
    return 0;
}