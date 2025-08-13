// https://codeforces.com/problemset/problem/1742/G

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll currOr=0;
    vector<ll>ans;      
    for(int iterations=0;iterations<min(30,n);iterations++){
        ll temp=0,bestInd=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==-1)
                continue;
            if((arr[i]|currOr)>temp){
                temp=arr[i]|currOr;
                bestInd=i;
            }
        }
        currOr=temp;
        ans.push_back(arr[bestInd]);
        arr[bestInd]=-1;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=-1){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}