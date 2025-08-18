// https://cses.fi/problemset/task/1095/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
}