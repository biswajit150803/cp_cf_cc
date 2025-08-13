#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,m;
    cin>>n>>m;
    if(m<n){
        cout<<"No"<<endl;
        return;
    }
    if(m%2==0){
        if(n%2==0){
            cout<<"Yes"<<endl;
            for(int i=0;i<n-2;i++){
                cout<<"1"<<" ";
            }
            ll x=(m-(n-2))/2;
            cout<<x<<" "<<x<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1"<<" ";
            }
            cout<<(m-(n-1))<<endl;
        }
    }
    else{
        if(n%2==0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1"<<" ";
            }
            cout<<(m-(n-1))<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}