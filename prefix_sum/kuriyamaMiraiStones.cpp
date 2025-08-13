#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n,0);
    for(long long i=0;i<n;i++)
        cin>>a[i];
    vector<long long> b=a;
    sort(b.begin(),b.end());
    vector<long long> pref(n+1,0);
    vector<long long> pref2(n+1,0);
    for(long long i=0;i<n;i++){
        pref[i+1]=pref[i]+a[i];
        pref2[i+1]=pref2[i]+b[i];
    }
    long long m;
    cin>>m;
    while(m--){
        long long type,l,r;
        cin>>type>>l>>r;
        l--;r--;
        if(type==1)
        {
            if(l==0)
                cout<<pref[r+1]<<endl;
            else
                cout<<pref[r+1]-pref[l]<<endl;
        }
        else{
            if(l==0)
                cout<<pref2[r+1]<<endl;
            else
                cout<<pref2[r+1]-pref2[l]<<endl;
        }
    }
    return 0;
}