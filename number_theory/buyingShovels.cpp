// https://codeforces.com/problemset/problem/1360/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    ll maxi=-1;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ll packageSize1=i;
            ll packageSize2=n/i;
            if(packageSize1 <= k){
                maxi=max(maxi, packageSize1);
            }
            if(packageSize2 <= k){
                maxi=max(maxi, packageSize2);
            }
        }
    }
    ll packCount=n/maxi;
    cout<<packCount<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}