// https://codeforces.com/problemset/problem/1791/G1

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int c,n;
    cin>>n>>c;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=i+1+a[i];
    }
    sort(v.begin(),v.end());
    int t=0;
    for(int i=0;i<n;i++){
        if(c-v[i]>=0){
            c-=v[i];
            t++;
        }
        else{
            break;
        }
    }
    cout<<t<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}