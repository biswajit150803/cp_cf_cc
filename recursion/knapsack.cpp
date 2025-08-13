// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

#include <bits/stdc++.h>
using namespace std;
int f(int ind,int W,vector<int>&weights,vector<int>&values){
    if(ind==weights.size()){
        return 0;
    }
    int pick=0,notpick=0;
    if(weights[ind]<=W){
        pick=f(ind+1,W-weights[ind],weights,values)+values[ind];
    }
    notpick=f(ind+1,W,weights,values);
    return max(pick,notpick);
}
int main(){
    int n,w;
    cin>>n>>w;
    vector<int>weights(n),values(n);
    for(int i=0;i<n;i++){
        cin>>weights[i]>>values[i];
    }
    int curr=0;
    curr=f(0,w,weights,values);
    cout<<curr<<endl;
}