// https://www.codechef.com/problems/ORTUPLES

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int p,q,r;
	    ll ans=1;
	    cin>>p>>q>>r;
	    for(int i=0;i<20;i++){
	        int cnt=0;
	        if(p & 1<<i)  cnt++;
	        if(q & 1<<i)  cnt++;
	        if(r & 1<<i)  cnt++;
	        if(cnt==1){
	            cout<<0<<endl;
	            return ;
	        }
	        if(cnt==3) {
	            ans=ans*4;
	        }
	    }
	    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}
