// https://codeforces.com/contest/1966/problem/B

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            a[i][j]=s[j];
        }
    }
    if(a[0][0]==a[n-1][m-1] || a[n-1][0]==a[0][m-1]){
        cout<<"YES"<<endl;
        return;
    }
    bool impossible=true;
    string ans="YES";
    for(int i=0;i<m-1;i++){
        if((a[0][i]!=a[0][i+1]) || (a[n-1][i]!=a[n-1][i+1])){
            impossible=false;
        }
    }
    if(impossible){
        ans="NO";
    }
    impossible=true;
    for(int i=0;i<n-1;i++){
        if((a[i][0]!=a[i+1][0]) || (a[i][m-1]!=a[i+1][m-1])){
            impossible=false;
        }
    }
    if(impossible){
        ans="NO";
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}