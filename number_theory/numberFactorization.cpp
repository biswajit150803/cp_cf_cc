// https://codeforces.com/problemset/problem/1787/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=1;
        map<ll, ll> mp; 
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ll cnt=0;
                while(n%i==0){
                    cnt++;
                    n=n/i;
                }
                mp[i]=cnt;
                x=max(x,cnt);
            }
        }
        if(n>1){
            mp[n]=1;
        }
        ll ans=0;
        for(ll i=1;i<=x;i++){
            ll prod=1;
            for(auto it=mp.begin(); it!=mp.end(); it++){
                if(mp[it->first]>0){
                    prod*=it->first;
                    mp[it->first]--;
                }
            }
            ans=ans+prod;
        }
        cout << ans << endl;
    }
}