// https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=30;i>=0;i--)
    {
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1<<i)){
                cnt++;
            }
        }
        if(n-cnt<=k){
            for(int j=0;j<n;j++){
                arr[j]=arr[j] | (1<<i);
            }
            k=k-(n-cnt);
        }
    }
    ll res=arr[0];
    for(int i=1;i<n;i++){
        res=res & arr[i];
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
