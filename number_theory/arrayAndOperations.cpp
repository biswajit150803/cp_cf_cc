// https://codeforces.com/problemset/problem/1618/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end(),greater<ll>());
        ll s=0;
        for(int i=0;i<k;i++){
            s+=v[i+k]/v[i];
        }
        for(int i=2*k;i<n;i++){
            s+=v[i];
        }
        cout<<s<<endl;
    }
}