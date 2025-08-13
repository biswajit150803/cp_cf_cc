// https://www.codechef.com/problems/XORMUL

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans=0;
    bool first=true;
    for(int i=n-1;i>=0;i--){
        int bita=a&(1<<i);
        int bitb=b&(1<<i);
        if(bita==bitb){
            if(bita==0){
                ans=ans|(1<<i);
            }
        }
        else{
            if(first){
                first=false;
            }
            else{
                if(bitb==0){
                    ans=ans | (1<<i);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
