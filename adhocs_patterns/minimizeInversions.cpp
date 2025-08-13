// https://codeforces.com/contest/1918/problem/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)    cin>>v[i].first;
    for(int i=0;i<n;i++)    cin>>v[i].second;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}
void solve1(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int inv_a=a[i]-1;
        int inv_b=b[i]-1;
        int k=inv_a+inv_b;
        v.push_back({k,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<a[v[i].second]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[v[i].second]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}