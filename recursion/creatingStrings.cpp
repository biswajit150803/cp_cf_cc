// https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>
using namespace std;
void f(vector<int>&freq,string &s,string ds,vector<string>&ans)
{
    if(ds.size()==s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(!freq[i]){
            ds.push_back(s[i]);
            freq[i]=1;
            f(freq,s,ds,ans);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int>freq(n,0);
    string ds;
    vector<string>ans;
    f(freq,s,ds,ans);
    set<string>res(ans.begin(),ans.end());
    cout<<res.size()<<endl;
    for(auto it:res){
        cout<<it<<endl;
    }
}