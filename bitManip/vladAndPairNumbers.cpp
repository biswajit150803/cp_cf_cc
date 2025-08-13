// https://codeforces.com/contest/1790/problem/E

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll x;
    cin>>x;
    if(x%2==1){
        cout<<-1<<endl;
        return;
    }
    ll a=x+x/2,b=x/2;
    if(a^b==x){
        cout<<a<<" "<<b<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}