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
    vector<int>bits(32,0);
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            if(a[j] & (1<<i)){
                bits[i]++;
            }
        }
    }
    ll ans=0;
    for(int i=0;i<32;i++){
        if(bits[i]>1){
            ans=ans | (1<<i);
        }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
        solve();
    }
}
