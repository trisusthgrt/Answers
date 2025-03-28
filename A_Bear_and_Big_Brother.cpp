#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int c=0;
    while(x<=y){
x*=3;
y*=2;
c++;
    }
    cout<<c<<endl;
    
    return 0;
}