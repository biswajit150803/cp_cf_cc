// https://cses.fi/problemset/task/2183/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[0]!=1){
        cout<<1<<endl;
    }
    else{
        ll maxSum=1,minSum=0;
        for(int i=1;i<n;i++){
            ll newMaxSum=maxSum+a[i];
            ll newMinSum=minSum+a[i];
            if(newMinSum-maxSum>1){
                break;
            }
            maxSum=max(newMaxSum,maxSum);
        }
        cout<<maxSum+1<<endl;
    }
}