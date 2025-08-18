// https://atcoder.jp/contests/abc052/tasks/arc067_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
int main(){
    int n;
    cin>>n;
    map<ll,ll>mp;
    for(int i=1;i<=n;i++){
        int copy=i;
        for(int j=2;j*j<=copy;j++){
            while(copy%j==0){
                mp[j]++;
                copy/=j;
            }
        }
        if(copy>1) mp[copy]++;
    }
    ll ans=1;
    for(auto it:mp){
        ans=(ans%mod*(it.second+1)%mod)%mod;
    }
    cout<<ans<<endl;
}
