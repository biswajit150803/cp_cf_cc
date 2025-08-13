// https://codeforces.com/contest/26/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isAlmostPrime(int n){
    int cnt=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            while(n%i==0){
                n=n/i;
            }
        }
    }
    if(n>1) cnt++;
    if(cnt==2) return true;
    else
    return false;
}
int main(){
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(isAlmostPrime(i)){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
