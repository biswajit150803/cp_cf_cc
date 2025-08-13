// https://www.codechef.com/problems/MAXAND18

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<ll,ll>>contribution(31);
    for(int i=0;i<31;i++){
        ll cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1LL<<i)){
                cnt++;
            }
        }
        contribution[i]={(cnt*(1LL<<i)),i*(-1)};
    }
    sort(contribution.begin(),contribution.end(),greater<pair<ll,ll>>());
    ll ans=0;
    for(int i=0;i<k;i++){
        ll bit=abs(contribution[i].second);
        ans=ans+(1LL<<bit);
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
