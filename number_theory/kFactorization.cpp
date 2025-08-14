// https://codeforces.com/problemset/problem/797/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,k;
    cin>>n>>k;
    int copy=n;
    int cnt=0;
    vector<int> v;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                v.push_back(i);
                cnt++;
            }
        }
    }
    if(n>1){
        v.push_back(n);
        cnt++;
    }
    if(cnt<k){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<cnt;i++){
        if(i==k-1){
            int res=1;
            for(int j=i;j<v.size();j++){
                res=res*v[j];
            }
            cout<<res<<endl;
            return 0;
        }
        else{
            cout<<v[i]<<" ";
        }
    }
}
