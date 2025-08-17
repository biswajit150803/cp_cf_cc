// https://atcoder.jp/contests/abc284/tasks/abc284_d

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    for(ll i=2;i*i*i<=n;i++){
        if(n%i==0){
            if((n/i)%i==0){
                cout<<i<<" "<<n/(i*i)<<endl;
                return;
            }
            else{
                ll a=(ll)sqrt(n/i);
                cout<<a<<" "<<i<<endl;
                return;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}