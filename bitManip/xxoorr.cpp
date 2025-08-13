// https://www.codechef.com/submit/XXOORR

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    ll arr[n];
    ll ans=0;
    for(int i=0;i<n;i++)    cin>>arr[i];
    for(int i=0;i<30;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1<<i))
                cnt++;
        }
        if(cnt<=k && cnt!=0)  ans++;
        else{
            ans+=(ceil((double)cnt/k));
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
