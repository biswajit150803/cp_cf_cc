// https://codeforces.com/problemset/problem/1421/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long temp=a&b;
        cout<<(a^temp)+(b^temp)<<endl;
    }
    return 0;
}