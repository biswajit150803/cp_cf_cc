// https://codeforces.com/problemset/problem/1474/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1000000;
bool sieve[N];
void solve(){
    ll d;
    cin>>d;
    ll temp=1+d;
    ll ans=1;
    for(ll i=temp;i<=N;i++){
        if(sieve[i]){
            ans=ans*i;
            temp=i;
            break;
        }
    }
    temp=temp+d;
    for(ll i=temp;i<=N;i++){
        if(sieve[i]){
            ans=ans*i;
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    for(int i=1;i<N;i++){
        sieve[i]=true;
    }
    sieve[0] = sieve[1] = false;
    for(int i=2;i*i<=N;i++){
        if(sieve[i]){
            for(int j=i*i;j<N;j+=i){
                sieve[j]=false;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}