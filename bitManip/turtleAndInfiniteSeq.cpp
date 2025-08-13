#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll l=max(n-m,0LL);
    ll r=n+m;
    ll ans=0;
    for(int i=0;i<32;i++){
        ll blockNol=l/(1LL<<i);
        ll blockNor=r/(1LL<<i);
        if(blockNol!=blockNor){
            ans=ans|(1LL<<i);
            continue;
        }
        else if(blockNol%2==1){
            ans=ans|(1LL<<i);
            continue;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}