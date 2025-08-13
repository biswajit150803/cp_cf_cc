// https://atcoder.jp/contests/abc356/tasks/abc356_d

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    for(int i=0;i<60;i++){
        if(m&(1LL<<i)){
            ll temp=n;
            temp=temp>>(i+1);
            temp=temp*(1LL<<i);
            temp=temp%mod;
            if(n&(1LL<<i)){
                temp=temp+(n%(1LL<<i)+1);
                temp=temp%mod;
            }
            ans=ans+temp;
        }
        
    }
    cout<<ans%mod<<endl;
}
int main(){
    solve();
    return 0;   
}