// https://codeforces.com/problemset/problem/1401/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    multiset<int> ms;
    int mini=*min_element(v, v+n);
    for(int i=0;i<n;i++){
        if(v[i]%mini==0){
            ms.insert(v[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]%mini==0){
            int temp=*ms.begin();
            v[i]=temp;
            ms.erase(ms.begin());
        }
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}