// Find the next samaller element for each element in the array towards the left

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> ans(n);
    stack<int> s;
    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}