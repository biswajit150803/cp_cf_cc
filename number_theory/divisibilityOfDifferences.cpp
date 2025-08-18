// https://codeforces.com/problemset/problem/876/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,k;
    cin>>n>>k>>m;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll rem=v[i]%m;
        mp[rem]++;
    }
    for(auto it:mp){
        if(it.second>=k){
            cout<<"Yes"<<endl;
            for(int j=0;j<n;j++){
                if(v[j] % m == it.first) {
                    cout<<v[j]<<" ";
                    k--;
                    if(k == 0) {
                        cout<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"No"<<endl;
}