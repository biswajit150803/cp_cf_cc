// https://codeforces.com/problemset/problem/1312/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }

    ll maxpowerk=1;
    while(maxpowerk<maxi){
        maxpowerk=maxpowerk*k;
    }

    bool found=1;
    while(maxpowerk>0){ 
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=maxpowerk){
                cnt++;
                arr[i]=arr[i]-maxpowerk;
            }
        }
        if(cnt>1){
            found=0;
            cout<<"NO"<<endl;
            return;
        }
        maxpowerk=maxpowerk/k;
    }
    if(found){
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                found=0;
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}