// https://www.codechef.com/problems/DSP

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int n = 1e7;
vector<int> spf(n);
void solve(){
    int x,y;
    cin>>x>>y;
    string s1=to_string(x);
    string s2=to_string(y);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    set<int>set1;
    set<int>set2;
    do{
        if(s1[0]=='0') continue; // skip leading zeroes
        int num1=stoi(s1);
        while(num1>1){
            set1.insert(spf[num1]);
            num1/=spf[num1];
        }
    }while(next_permutation(s1.begin(), s1.end()));
    do{
        if(s2[0]=='0') continue; // skip leading zeroes
        int num2=stoi(s2);
        while(num2>1){
            set2.insert(spf[num2]);
            num2/=spf[num2];
        }
    }while(next_permutation(s2.begin(), s2.end()));
    int ans=1;
    for(auto it:set1){
        if(set2.find(it)!=set2.end()){
            ans=max(ans, it);
        }
    }
    cout<<ans<<endl;
}
int main(){
    for(int i=0;i<n;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<n;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}