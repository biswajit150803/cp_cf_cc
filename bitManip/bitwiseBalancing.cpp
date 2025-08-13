#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    map<tuple<ll,ll,ll>,ll>mp;
    mp[{0,0,0}]=0;
    mp[{0,0,1}]=1;
    mp[{0,1,0}]=1;
    mp[{0,1,1}]=-1;
    mp[{1,0,0}]=-1;
    mp[{1,0,1}]=1;
    mp[{1,1,0}]=1;
    mp[{1,1,1}]=0;
    while(t--){
        ll b,c,d;   
        cin>>b>>c>>d;
        ll a=0;
        for(int i=0;i<60;i++){
            ll x=(b&(1LL<<i))!=0;
            ll y=(c&(1LL<<i))!=0;
            ll z=(d&(1LL<<i))!=0;
            ll val=mp[{x,y,z}];
            if(val==-1){
                a=-1;
                break;
            }
            else if(val==1){
                a|=(1LL<<i);
            }
        }
        cout<<a<<endl;
    }
}