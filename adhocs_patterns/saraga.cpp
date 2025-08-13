// https://codeforces.com/problemset/problem/2045/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    ll n=s.size(),m=t.size();
    vector<int> mark(26,-1);
    for(int i=0;i<m-1;i++){
        mark[t[i]-'a']=i;
    }
    ll x=INT_MAX,y=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(mark[s[i]-'a']!=-1 && (x==INT_MAX || i+1+m-mark[s[i]-'a'] < x+1+m-y))
        {
            x=i;
            y=mark[s[i]-'a'];
        }
    }
    if(x==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else{
        // eg, s=berhiber t=wortelhijau => abbreviation : be+lhijau=belhijau
        cout<<s.substr(0,x)+t.substr(y)<<endl;
    }
    return 0;
}