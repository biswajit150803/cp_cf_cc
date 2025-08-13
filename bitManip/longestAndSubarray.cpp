// https://www.codechef.com/submit/ANDSUBAR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long pos=1,ans=0;
	    while(pos<=n){
	        long long nxt=min(n,(pos*2)-1);
	        ans=max(ans,nxt-pos+1);
	        pos=pos*2;
	    }
	    cout<<ans<<endl;
	}
}
