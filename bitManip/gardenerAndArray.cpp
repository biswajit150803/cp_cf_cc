#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll k[n];
    vector<ll>bits[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>k[i];
        for(int j=0;j<k[i];j++){
            ll x;
            cin>>x;
            if(mp.find(x)==mp.end())
                mp[x]=1;
            else
                mp[x]++;
            bits[i].push_back(x);
        }
    }
    string ans="NO";
    for(int i=0;i<n;i++){
        bool f=0;
        for(int j=0;j<k[i];j++){
            if(mp[bits[i][j]]==1){
                f=1;
                break;
            }
        }
        if(f==0){
            ans="YES";
            break;
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