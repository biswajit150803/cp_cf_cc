// https://codeforces.com/problemset/problem/1362/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        while(n){
            ans+=n;
            n/=2;
        }
        cout<<ans<<endl;
    }
}