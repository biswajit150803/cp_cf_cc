// https://cses.fi/problemset/task/1074

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s=s+arr[i];
    }
    sort(arr.begin(),arr.end());
    ll med;
    if(n%2!=0){
        med=arr[n/2];
    }
    else{
        med=(arr[n/2]+arr[n/2-1])/2;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans=ans+(abs(arr[i]-med));
    }
    cout<<ans<<endl;
}