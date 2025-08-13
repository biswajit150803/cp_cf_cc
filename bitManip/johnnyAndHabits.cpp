#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n),freq(1024,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int k=1;k<=1023;k++){
        vector<int>temp(1024,0);
        for(int j=0;j<n;j++){
            int val=k^arr[j];
            temp[val]++;
        }
        if(temp==freq){
            cout<<k<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}
