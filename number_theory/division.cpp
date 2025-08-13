// https://codeforces.com/contest/1444/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll p,q;
    cin>>p>>q;
    vector<int>primes;
    ll copyq=q;
    for(int i=2;i*i<=copyq;i++){
        if(copyq%i==0){
            primes.push_back(i);
            while(copyq%i==0){
                copyq=copyq/i;
            }
        }
    }
    ll ans=p;
    if(copyq>1)    primes.push_back(copyq);
    for(auto prime:primes){
        ll a=0,b=0;
        ll pp=p,qq=q;
        while(pp%prime==0){
            a++;
            pp=pp/prime;
        }
        while(qq%prime==0){
            b++;
            qq=qq/prime;
        }
        ll drop=a-b+1;
        ll val=1;
        for(int i=1;i<=drop;i++){
            val=val*prime;
        }
        ans=min(val,ans);
    }
    cout<<p/ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}