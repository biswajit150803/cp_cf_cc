// https://codeforces.com/contest/1855/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int c=0;
        for(ll i=1;i<=n;i++){
            if(n%i==0){
                c++;
            }
            else{
                break;
            }
        }
        cout << c << endl;
    }
}