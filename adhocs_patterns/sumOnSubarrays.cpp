// https://codeforces.com/problemset/problem/1809/C

// https://www.youtube.com/watch?v=wLgsacI0yBI

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==0){
            for(int i=0;i<n;i++){
                cout<<-1<<" ";
            }
            cout<<endl;
            continue;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(k>=(n-i)){
                ans[i]=1000;
                k=k-(n-i);
            }else{
                ans[i]=k;
                for(int j=i+1;j<=(i+k-1);j++){
                    ans[j]=-1;
                }
                for(int j=i+k;j<n;j++){
                    ans[j]=-2;
                }
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}