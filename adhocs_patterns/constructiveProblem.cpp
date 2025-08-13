// https://codeforces.com/contest/1819/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    int mex=0;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.first==mex){
            mex++;
        }
        else{
            break;
        }
    }
    int targetMex=mex+1;
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(a[i]==targetMex){
            if(l==-1)   l=i;
            r=i;
        }
    }
    // if frequency of m+1 is not 0, i.e, there is an occurence of m+1
    if(l!=-1){
        for(int i=l;i<=r;i++){
            a[i]=mex;
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int newMex=0;
        for(auto it:m){
            if(it.first==newMex){
                newMex++;
            }
            else{
                break;
            }
        }
        if(newMex==targetMex){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    // if there is no occurence of m+1 then we can replace any element where element<mex or element>mex+1 with frequency greater than 1 with m
    else{
        bool f=false;
        for(auto it:mp){
            if(it.first<mex && it.second>1){
                f=true;
            }
            if(it.first>mex+1 && it.second>=1){
                f=true;
            }
        }
        if(f)   cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}