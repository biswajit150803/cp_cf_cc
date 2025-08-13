#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        long long n=x.size(),m=y.size();
        long long posx=0,posy=0;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        for(int i=0;i<m;i++){
            if(y[i]=='1'){
                posy=i;
                break;
            }
        }
        for(int i=posy;i<n;i++){
            if(x[i]=='1'){
                posx=i;
                break;
            }
        }
        long long k=posx-posy;
        cout<<k<<endl;
    }
}