// https://codeforces.com/contest/1881/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void addDivisors(ll x,map<ll,ll>&divisors){
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            while(x%i==0){
                divisors[i]++;
                x /= i;
            }
        }
    }
    if(x > 1) {
        divisors[x]++;
    }
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    map<ll,ll> divisors;
    for(int i=0;i<n;i++){
        cin>>v[i];
        addDivisors(v[i], divisors);
    }
    for(auto& it : divisors){
        ll d = it.first;
        ll cnt = it.second;
        if(cnt%n!= 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}