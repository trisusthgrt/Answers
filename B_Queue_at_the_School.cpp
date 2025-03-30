#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=1;i<=k;i++){
      for(int j=0;j<n-1;j++){
        if(s[j]=='B' && s[j+1]=='G'){
          s[j]='G';
          s[j+1]='B';
          j++;
        }
      }
    }
    cout<<s<<endl;
    return 0;
}