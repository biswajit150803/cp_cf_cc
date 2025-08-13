// https://codeforces.com/problemset/problem/1238/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a-b>1){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}