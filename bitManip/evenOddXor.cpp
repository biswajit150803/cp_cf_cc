#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==3){
        cout<<"1 2 3 \n";
        return;
    }

    stack<int>even,odd;
    int f=2;
    for(int i=0;i<n/2;i++){
        even.push(f);
        odd.push(f+1);
        f+=2;
    }
    if((n/2)%2==1){
        ll p=odd.top();
        odd.pop();
        p=p^1;
        p=p^(1ll<<20);
        odd.top()^=(1ll<<20);
        odd.push(p);    
    }

    for(int i=0;i<n;i++){
        if(n%2==1 && i==n-1){
            cout<<0<<" ";
        }
        else if(i%2==0){
            cout<<even.top()<<" ";
            even.pop();
        }
        else{
            cout<<odd.top()<<" ";
            odd.pop();
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}