// https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>x>>n;
        ll pos;
        if(n%4==0){
            pos=0;
        }
        else if(n%4==1){
            pos=-n;
        }
        else if(n%4==2){
            pos=1;
        }
        else{
            pos=n+1;
        }
        if(x%2==0){
            cout<<pos+x<<"\n";
        }
        else{
            cout<<x-pos<<"\n";
        }
        
    }
}