#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ll maxi=32;
    while(q--){
        ll x;
        cin>>x;
        if(x>maxi){
            continue;
        }
        maxi=x;
        for(int i=0;i<n;i++){
            if((arr[i] & ((1<<x)-1))==0)
                arr[i]+=((1<<x)-1);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}