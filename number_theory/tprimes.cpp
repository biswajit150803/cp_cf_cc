// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        ll temp=sqrt(arr[i]);
        if(temp*temp==arr[i] && isPrime(temp)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}