#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long solve(long long n,long long k){
    if(k==0){
        return 1;
    }
    long long ans=solve(n,k-1);
    ans=ans%mod;
    ans=ans*n;
    ans=ans%mod;
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
    return 0;
}