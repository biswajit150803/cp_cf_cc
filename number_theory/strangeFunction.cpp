// https://codeforces.com/problemset/problem/1542/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
void solve(){
    ll n;
    cin>>n;
    ll lcm=1;
    ll bef=0,after=0,ans=0;
    // find the number of integers from 1 to n that have f(i)=x
    // before= n/lcm(1,2,...,x-1)
    // after= n/lcm(1,2,...,x)
    for(ll x=2;;x++){
        bef=n/lcm;
        lcm=lcm*x/__gcd(lcm,x);
        after=n/lcm;
        ll values=bef-after;
        ans=ans+values*x;
        ans=ans%MOD;
        if(lcm>n) break;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}