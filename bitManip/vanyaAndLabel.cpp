// https://codeforces.com/problemset/problem/677/C

#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    string s;
    cin>>s;
    string pat="";
    for(char i='0';i<='9';i++){
        pat+=i;
    }
    for(char i='A';i<='Z';i++){
        pat+=i;
    }
    for(char i='a';i<='z';i++){
        pat+=i;
    }
    pat+='-';
    pat+='_';
    vector<int>symbolVal(400);
    for(int i=0;i<64;i++){
        symbolVal[pat[i]]=i;
    }
    ll ans=1;
    for(int i=0;i<s.size();i++){    
        int val=symbolVal[s[i]];
        for(int j=0;j<6;j++){
            if((val&(1<<j))==0){
                ans=(ans*3)%MOD;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}