// https://atcoder.jp/contests/abc103/tasks/abc103_c

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    ll arr[n];
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    cout<<s-n<<endl;
}
