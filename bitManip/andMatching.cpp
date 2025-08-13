// https://codeforces.com/problemset/problem/1630/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    if(n==4 && k==3){
        cout<<-1<<endl;
        return;
    }
    int a[n/2][2];
    for(int i=0;i<n/2;i++){
        a[i][0]=i;
        a[i][1]=n-i-1;
    }
    if(k==n-1){
        swap(a[0][0],a[1][1]);
        swap(a[1][1],a[2][1]);
    }
    else{
        if(k<n/2){
            swap(a[0][0],a[k][0]);  
        }
        else{
            k=n-k-1;
            swap(a[0][0],a[k][1]);
        }
    }
    for(int i=0;i<n/2;i++){
        cout<<a[i][0]<<" "<<a[i][1]<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
