// https://cses.fi/alon/task/2419

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5;
int power[N];
void solve(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    power[2]=1;
    for(int i=3;i<N;i++){
        power[i]=i/2+power[i/2];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int c1=power[n-1];
        int c2=power[i];
        int c3=power[n-1-i];
        if(c1-c2-c3==0){
            ans=ans^v[i];
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t=1;
    while(t--){
        solve();
    }
}