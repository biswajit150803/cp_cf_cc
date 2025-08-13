#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<long long int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long int>prefix(n,0);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if(a==0){
            cout<<prefix[b]<<endl;
        }
        else{
            cout<<prefix[b]-prefix[a-1]<<endl;
        }
    }
    return 0;
}