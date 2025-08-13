// https://codeforces.com/contest/776/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+1;
bool prime[N];
void solve(){
    ll n;
    cin>>n;
    for(int i=0;i<=n;i++){
        prime[i]=1;
    }
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i*i<=n+1;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=n+1;j=j+i){
                prime[j]=0;
            }
        }
    }
    cout<<2<<endl; 
    // if number is prime then 1 else 2
    for(int i=2;i<=n+1;i++){
        if(prime[i]==1){
            cout<<1<<" ";
        }
        else{
            cout<<2<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}