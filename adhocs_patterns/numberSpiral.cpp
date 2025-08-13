// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll r,c;
    cin>>r>>c;
    ll ans;
    if(r>=c){
        ll first;
        if(r%2==0){
            first=r*r;
            ans=first-c+1;
        }
        else{
            first=(r-1)*(r-1)+1;
            ans=first+c-1;
        }
    }
    else{
        ll first;
        if(c%2!=0){
            first=c*c;
            ans=first-r+1;
        }
        else{
            first=(c-1)*(c-1)+1;
            ans=first+r-1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}