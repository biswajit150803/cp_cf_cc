// https://www.codechef.com/COOK143A/problems/SEGFAULT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin >> n;
        vector<long long>diff(n+1,0);
        vector<int>possible,ans;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            l--;r--;
            diff[l]++;
            diff[r+1]--;
            if(i<l || i>r){
                possible.push_back(i+1);
            }
        }
        for(int i=1;i<n;i++){
            diff[i]+=diff[i-1];
        }
        for(int it:possible){
            if(diff[it-1]==n-1){
                ans.push_back(it);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
	}
}
