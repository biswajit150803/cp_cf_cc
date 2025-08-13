// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>&arr,int n,int m){
    if(i==n-1 && j==m-1 ){
        return arr[i][j];
    }
    if(i>=n || j>=m){
        return -1e9;
    }
    int right=arr[i][j]+f(i,j+1,arr,n,m);   
    int down=arr[i][j]+f(i+1,j,arr,n,m);
    return max(right,down);
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int ans=f(0,0,a,n,m);
    cout<<ans<<endl;
}