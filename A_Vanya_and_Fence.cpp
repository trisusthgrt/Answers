#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define NO cout << "NO\n"
#define YES cout << "YES\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int h;
   
    cin>>n>>h;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
     if(arr[i]<=h){
      sum+=1;
     }
     else{
      sum+=2;
     }
    }
    cout<<sum<<endl;
    
    return 0;
}