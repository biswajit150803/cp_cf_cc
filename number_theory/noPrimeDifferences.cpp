// https://codeforces.com/contest/1838/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int c=1;
    for(int i=1;i<n;i+=2){
        for(int j=0;j<m;j++){
            arr[i][j]=c;
            c++;
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            arr[i][j]=c;
            c++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}