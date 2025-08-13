// https://cses.fi/problemset/task/2205

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v={"0","1"};
    for(int i=2;i<=n;i++){
        int end=v.size()-1;
        while(end>=0){
            v.push_back(v[end]);
            end--;
        }
        int count=pow(2,i);
        for(int j=1;j<=count;j++){
            if(j<=(count/2)){
                v[j-1]="0"+v[j-1];
            }
            else{
                v[j-1]="1"+v[j-1];
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
