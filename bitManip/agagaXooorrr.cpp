// https://codeforces.com/problemset/problem/1516/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        ll x=0;
        for(int j=0;j<=i;j++){
            x=x^arr[j];
        }
        ll t=0,f=0;
        for(int j=i+1;j<n;j++){
            t=t^arr[j];
            if(t==x){
                t=0;
                f=1;
            }
        }
        if(f==1 && t==0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}