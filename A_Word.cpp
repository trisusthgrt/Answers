#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   string s;
   cin>>s;
   int l=0,u=0;
   for(int i=0;i<s.size();i++){
       if(s[i]>='a' && s[i]<='z'){
           l++;
       }
       else{
           u++;
       }}
    if(l >= u) {
        for(char &c : s) {
            c = tolower(c);
        }
    } else {
        for(char &c : s) {
            c = toupper(c);
        }
    }
    cout<<s<<endl;
    
    return 0;
}