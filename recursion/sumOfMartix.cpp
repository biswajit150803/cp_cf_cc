// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

#include <bits/stdc++.h>
using namespace std;
void f(int i,int j,vector<vector<int>>&a,vector<vector<int>>&b,vector<vector<int>>&ans){
    if(i==a.size()){
        return;
    }
    if(j==a[0].size()){
        f(i+1,0,a,b,ans);
        return;
    }
    ans[i][j]=a[i][j]+b[i][j];
    f(i,j+1,a,b,ans);
}
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>a(r,vector<int>(c)),b(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    vector<vector<int>>ans(r,vector<int>(c));
    f(0,0,a,b,ans);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}