// https://codeforces.com/contest/1821/problem/B
// done by me
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),a1(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    ll l=0,r=0;
    // find the leftmost and rightmost index where the array is not sorted
    for(int i=0;i<n;i++){
        if(a[i]!=a1[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=a1[i]){
            r=i;
            break;
        }
    }
    // check for the longest subarray by extending the leftmost and rightmost index
    for(int i=l-1;i>=0;i--){
        if(a[i]==a1[i] && a1[i]<=a1[i+1]){
            l--;
        }
        else{
            break;
        }
    }
    for(int i=r+1;i<n;i++){
        if(a[i]==a1[i] && a1[i]>=a1[i-1]){
            r++;
        }
        else{
            break;
        }
    }
    cout<<++l<<" "<<++r<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}