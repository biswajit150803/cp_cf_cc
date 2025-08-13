

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        vector<bool>isValid(n,true);
        for(int i=29;i>=0;i--){
            ll cnt=0;
            for(int j=0;j<n;j++){
                if(isValid[j] && (arr[j] & (1<<i))){
                    cnt++;
                }
            }

            if(cnt>=2){
                for(int j=0;j<n;j++){
                    if(isValid[j] && (arr[j] & (1<<i))==0){
                        isValid[j]=false;
                    }
                }
            }
        }
        ll ans=(1<<30)-1;
        ll used=0;
        for(int i=0;i<n;i++){
            if(isValid[i]){
                ans=ans & arr[i];
            }
            
        }
        cout<<sum-(2*ans)<<"\n";
    }
}