#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<=61;i++){
        long long num=1LL<<i;
        set<long long>st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]%num);
        }
        if(st.size()==2){
            cout<<num<<endl;
            return;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
    