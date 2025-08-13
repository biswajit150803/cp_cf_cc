// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a<b) swap(a, b);
        int diff=a-b;
        a=a-2*diff;
        b=b-diff;
        if(a>=0 && a==b && a%3==0){
            cout << "YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}