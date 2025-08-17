// https://codeforces.com/problemset/problem/1285/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll x;
    cin >> x;
    ll a = 1, b = x;
    ll ans=x;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0 && (i*x/i)/__gcd(i, x/i) == x){
            a=i;
            b=x/i;
            ans=min(ans,max(a, b));
        }
    }
    cout << ans << " "<< x/ans << endl;
    return 0;
}