// https://codeforces.com/problemset/problem/1634/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    bool f=1;
    for(int i=0;i<n;i++){
        // odd number changes parity and even number keeps parity same
        if(arr[i]&1LL){
            f=!f;
        }
    }
    // Alice starts with odd number and Bob with even
    if(x&1LL){
        // if f and y are same parity then Alice wins
        if((f&1LL && y&1LL) || (!(f&1LL) && !(y&1LL))){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    // Alice starts with even number and Bob with odd
    else {
        // if f and y are same parity then Bob wins
        if((f&1LL && y&1LL) || (!(f&1LL) && !(y&1LL))){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}