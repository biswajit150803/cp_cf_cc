// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

#include <bits/stdc++.h>
using namespace std;
void f(int n,vector<int>&arr){
    arr.push_back(n);
    if(n==1){
        return;
    }
    if(n%2==0){
        f(n/2,arr);
    }else{
        f(3*n+1,arr);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    f(n,arr);
    cout<<arr.size()<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
}