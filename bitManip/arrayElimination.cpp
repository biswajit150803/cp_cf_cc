#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>validK(n+1,1);

    for(int i=0;i<32;i++){
        vector<ll>valid(n+1,0);
        ll cnt=0;
        for(int j=0;j<n;j++){
            if(a[j] & (1<<i)){
                cnt++;
            }
        }
        for(int j=1;j<=n;j++){
            if(cnt%j==0){
                valid[j]=1;
            }
        }
        for(int j=1;j<=n;j++){
            validK[j]=validK[j] & valid[j];
        }
    }
    for(int i=1;i<=n;i++){
        if(validK[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}