// https://codeforces.com/problemset/problem/2007/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    ll g=__gcd(a,b);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i] %= g; 
    }
    sort(v.begin(), v.end());
    ll ans=v[n-1]-v[0];
    for(int i=1;i<n;i++){
        ans = min(ans, v[i-1]+g-v[i]);
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